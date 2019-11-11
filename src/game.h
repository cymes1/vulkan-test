#ifndef GAME_H
#define GAME_H

#include "graphics/window.h"
#include "tests/test.h"
#include "tests/test-available-vulkan-extensions.h"
#include "tests/test-create-instance.h"
#include "tests/test-enumerate-physical-devices.h"
#include "tests/test-enumerate-physical-device-extensions.h"

namespace VulkanTest {

	class Game
	{
	private:
		Graphics::Window m_window;
		Tests::Test* m_currentTest;
		Tests::TestMenu* m_menu;


	public:
		Game();
		void run();
		void clean();
	};
}

#endif
