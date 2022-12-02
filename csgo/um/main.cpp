#include "../shared/shared.h"

namespace input
{
	void mouse_move(int x, int y)
	{
		// mouse_event(MOUSEEVENTF_MOVE, (DWORD)x, (DWORD)y, 0, 0);

		cs::input::mouse_move(x, y);
	}

	void mouse1_down(void)
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	}

	void mouse1_up(void)
	{
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	}
}

namespace config
{
	BOOL  rcs = 0;
	DWORD aimbot_button = 107;
	float aimbot_fov = 3.0f;
	float aimbot_smooth = 7.0f;
	BOOL  aimbot_visibility_check = 1;
	DWORD triggerbot_button = 120;
}

int main(void)
{
	cs::reset_globals();
	while (1)
	{
		Sleep(1);
		csgo::run();
	}
	return 0;
}

