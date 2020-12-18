#pragma once

namespace Vessel {

	typedef enum class MouseCode : uint32_t
	{
		/* From 'glfw.h' */
		Button0 = 0,
		Button1 = 1,
		Button2 = 2,
		Button3 = 3,
		Button4 = 4,
		Button5 = 5,
		Button6 = 6,
		Button7 = 7,

		ButtonLast = Button7,
		ButtonLeft = Button0,
		ButtonRight = Button1,
		ButtonMiddle = Button2
	} Mouse;

	inline std::ostream& operator<<(std::ostream& os, MouseCode mouseCode)
	{
		os << static_cast<int32_t>(mouseCode);
		return os;
	}

}

#define VSSL_MOUSE_BUTTON_0      ::Vessel::Mouse::Button0
#define VSSL_MOUSE_BUTTON_1      ::Vessel::Mouse::Button1
#define VSSL_MOUSE_BUTTON_2      ::Vessel::Mouse::Button2
#define VSSL_MOUSE_BUTTON_3      ::Vessel::Mouse::Button3
#define VSSL_MOUSE_BUTTON_4      ::Vessel::Mouse::Button4
#define VSSL_MOUSE_BUTTON_5      ::Vessel::Mouse::Button5
#define VSSL_MOUSE_BUTTON_6      ::Vessel::Mouse::Button6
#define VSSL_MOUSE_BUTTON_7      ::Vessel::Mouse::Button7
#define VSSL_MOUSE_BUTTON_LAST   ::Vessel::Mouse::ButtonLast
#define VSSL_MOUSE_BUTTON_LEFT   ::Vessel::Mouse::ButtonLeft
#define VSSL_MOUSE_BUTTON_RIGHT  ::Vessel::Mouse::ButtonRight
#define VSSL_MOUSE_BUTTON_MIDDLE ::Vessel::Mouse::ButtonMiddle