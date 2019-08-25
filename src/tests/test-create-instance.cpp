#include "test-create-instance.h"
#include "../utils/log.h"

namespace VulkanTest::Tests {

	TestCreateInstance::TestCreateInstance()
	{
		Utils::Log::info("Starting test: create vulkan instance.");
		Utils::Log::info("");

		// check vulkan instance extensions
		std::vector<VkExtensionProperties> availableExtensions;
		if(!Graphics::checkAvailableVulkanExtensions(availableExtensions))
		{
			Utils::Log::error("failed");
			return;
		}

		// read required extensions from config file
		std::string filepath = "data/test-create-instance.conf";
		std::vector<std::string> stringRequiredExtensions;
		if(!Graphics::readRequiredExtension(filepath, stringRequiredExtensions))
		{
			Utils::Log::error("failed");
			return;
		}

		// convert from vector<std::string> to vector<const char*>
		std::vector<const char*> requiredExtensions;
		requiredExtensions.resize(stringRequiredExtensions.size());
		for(int i = 0; i < stringRequiredExtensions.size(); i++)
			requiredExtensions[i] = stringRequiredExtensions[i].c_str();


		// check if required instance extensions are present
		if(!Graphics::checkIfRequiredExtensionsArePresent(requiredExtensions, availableExtensions))
		{
			Utils::Log::error("failed");
			return;
		}

		// create vulkan instance
		VkInstance instance;
		if(!Graphics::createVulkanInstance(instance, requiredExtensions))
			Utils::Log::error("failed");
	}
}
