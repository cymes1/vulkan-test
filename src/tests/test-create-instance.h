#ifndef TEST_CREATE_INSTANCE_H
#define TEST_CREATE_INSTANCE_H

#include <fstream>
#include <string>
#include <vector>
#include <vulkan/vulkan.h>
#include "test.h"
#include "../graphics/vulkan-helper.h"

namespace VulkanTest::Tests {

	class TestCreateInstance : public Test
	{
	public:
		TestCreateInstance();

	private:
		bool readRequiredExtension(const std::string& filepath, std::vector<std::string>& requiredExtensions);
	};
}

#endif
