#ifndef TEST_AVAILABLE_VULKAN_EXTENSIONS_H
#define TEST_AVAILABLE_VULKAN_EXTENSIONS_H

#include <vector>
#include <vulkan/vulkan.h>
#include "test.h"
#include "../graphics/test-helper.h"
#include "../graphics/test-available-vulkan-extensions-helper.h"
#include "../utils/log.h"

namespace VulkanTest::Tests {

	class TestAvailableVulkanExtensions : public Test
	{
	public:
		TestAvailableVulkanExtensions();
	};

}

#endif
