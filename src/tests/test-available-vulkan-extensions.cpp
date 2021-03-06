#include "test-available-vulkan-extensions.h"

namespace VulkanTest::Tests {

	TestAvailableVulkanExtensions::TestAvailableVulkanExtensions()
	{
		Utils::Log::info("Starting test: get available vulkan instance extensions.");
		Utils::Log::info("");

		std::vector<VkExtensionProperties> availableExtensions;
		bool result = Graphics::checkAvailableVulkanExtensions(&availableExtensions);
		if(result)
        {
            Graphics::logAvailableVulkanExtensions(&availableExtensions);
            Graphics::logResultSuccess();
        }
		else
		    Graphics::logResultFailed();
	}
}
