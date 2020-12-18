#pragma once

namespace Vessel {

	typedef enum class KeyCode : uint16_t
	{
		/* From 'glfw.h' */
		/* Printable keys */
		Space = 32,
		Apostrophe = 39, /* ' */
		Comma = 44, /* , */
		Minus = 45, /* - */
		Period = 46, /* . */
		Slash = 47, /* / */

		D0 = 48, /* 0 */
		D1 = 49, /* 1 */
		D2 = 50, /* 2 */
		D3 = 51, /* 3 */
		D4 = 52, /* 4 */
		D5 = 53, /* 5 */
		D6 = 54, /* 6 */
		D7 = 55, /* 7 */
		D8 = 56, /* 8 */
		D9 = 57, /* 9 */

		Semicolon = 59, /* ; */
		Equal = 61, /* = */

		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,

		LeftBracket = 91,  /* [ */
		Backslash = 92,  /* \ */
		RightBracket = 93,  /* ] */
		GraveAccent = 96,  /* ` */

		World1 = 161, /* non-US #1 */
		World2 = 162, /* non-US #2 */

		/* Function keys */
		Escape = 256,
		Enter = 257,
		Tab = 258,
		Backspace = 259,
		Insert = 260,
		Delete = 261,
		Right = 262,
		Left = 263,
		Down = 264,
		Up = 265,
		PageUp = 266,
		PageDown = 267,
		Home = 268,
		End = 269,
		CapsLock = 280,
		ScrollLock = 281,
		NumLock = 282,
		PrintScreen = 283,
		Pause = 284,
		F1 = 290,
		F2 = 291,
		F3 = 292,
		F4 = 293,
		F5 = 294,
		F6 = 295,
		F7 = 296,
		F8 = 297,
		F9 = 298,
		F10 = 299,
		F11 = 300,
		F12 = 301,
		F13 = 302,
		F14 = 303,
		F15 = 304,
		F16 = 305,
		F17 = 306,
		F18 = 307,
		F19 = 308,
		F20 = 309,
		F21 = 310,
		F22 = 311,
		F23 = 312,
		F24 = 313,
		F25 = 314,

		/* Keypad */
		KP0 = 320,
		KP1 = 321,
		KP2 = 322,
		KP3 = 323,
		KP4 = 324,
		KP5 = 325,
		KP6 = 326,
		KP7 = 327,
		KP8 = 328,
		KP9 = 329,
		KPDecimal = 330,
		KPDivide = 331,
		KPMultiply = 332,
		KPSubtract = 333,
		KPAdd = 334,
		KPEnter = 335,
		KPEqual = 336,

		LeftShift = 340,
		LeftControl = 341,
		LeftAlt = 342,
		LeftSuper = 343,
		RightShift = 344,
		RightControl = 345,
		RightAlt = 346,
		RightSuper = 347,
		Menu = 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

/* Printable keys */
#define VSSL_KEY_SPACE           ::Vessel::Key::Space
#define VSSL_KEY_APOSTROPHE      ::Vessel::Key::Apostrophe    /* ' */
#define VSSL_KEY_COMMA           ::Vessel::Key::Comma         /* , */
#define VSSL_KEY_MINUS           ::Vessel::Key::Minus         /* - */
#define VSSL_KEY_PERIOD          ::Vessel::Key::Period        /* . */
#define VSSL_KEY_SLASH           ::Vessel::Key::Slash         /* / */
#define VSSL_KEY_0               ::Vessel::Key::D0
#define VSSL_KEY_1               ::Vessel::Key::D1
#define VSSL_KEY_2               ::Vessel::Key::D2
#define VSSL_KEY_3               ::Vessel::Key::D3
#define VSSL_KEY_4               ::Vessel::Key::D4
#define VSSL_KEY_5               ::Vessel::Key::D5
#define VSSL_KEY_6               ::Vessel::Key::D6
#define VSSL_KEY_7               ::Vessel::Key::D7
#define VSSL_KEY_8               ::Vessel::Key::D8
#define VSSL_KEY_9               ::Vessel::Key::D9
#define VSSL_KEY_SEMICOLON       ::Vessel::Key::Semicolon     /* ; */
#define VSSL_KEY_EQUAL           ::Vessel::Key::Equal         /* = */
#define VSSL_KEY_A               ::Vessel::Key::A
#define VSSL_KEY_B               ::Vessel::Key::B
#define VSSL_KEY_C               ::Vessel::Key::C
#define VSSL_KEY_D               ::Vessel::Key::D
#define VSSL_KEY_E               ::Vessel::Key::E
#define VSSL_KEY_F               ::Vessel::Key::F
#define VSSL_KEY_G               ::Vessel::Key::G
#define VSSL_KEY_H               ::Vessel::Key::H
#define VSSL_KEY_I               ::Vessel::Key::I
#define VSSL_KEY_J               ::Vessel::Key::J
#define VSSL_KEY_K               ::Vessel::Key::K
#define VSSL_KEY_L               ::Vessel::Key::L
#define VSSL_KEY_M               ::Vessel::Key::M
#define VSSL_KEY_N               ::Vessel::Key::N
#define VSSL_KEY_O               ::Vessel::Key::O
#define VSSL_KEY_P               ::Vessel::Key::P
#define VSSL_KEY_Q               ::Vessel::Key::Q
#define VSSL_KEY_R               ::Vessel::Key::R
#define VSSL_KEY_S               ::Vessel::Key::S
#define VSSL_KEY_T               ::Vessel::Key::T
#define VSSL_KEY_U               ::Vessel::Key::U
#define VSSL_KEY_V               ::Vessel::Key::V
#define VSSL_KEY_W               ::Vessel::Key::W
#define VSSL_KEY_X               ::Vessel::Key::X
#define VSSL_KEY_Y               ::Vessel::Key::Y
#define VSSL_KEY_Z               ::Vessel::Key::Z
#define VSSL_KEY_LEFT_BRACKET    ::Vessel::Key::LeftBracket   /* [ */
#define VSSL_KEY_BACKSLASH       ::Vessel::Key::Backslash     /* \ */
#define VSSL_KEY_RIGHT_BRACKET   ::Vessel::Key::RightBracket  /* ] */
#define VSSL_KEY_GRAVE_ACCENT    ::Vessel::Key::GraveAccent   /* ` */
#define VSSL_KEY_WORLD_1         ::Vessel::Key::World1        /* non-US #1 */
#define VSSL_KEY_WORLD_2         ::Vessel::Key::World2        /* non-US #2 */

/* Function keys */
#define VSSL_KEY_ESCAPE          ::Vessel::Key::Escape
#define VSSL_KEY_ENTER           ::Vessel::Key::Enter
#define VSSL_KEY_TAB             ::Vessel::Key::Tab
#define VSSL_KEY_BACKSPACE       ::Vessel::Key::Backspace
#define VSSL_KEY_INSERT          ::Vessel::Key::Insert
#define VSSL_KEY_DELETE          ::Vessel::Key::Delete
#define VSSL_KEY_RIGHT           ::Vessel::Key::Right
#define VSSL_KEY_LEFT            ::Vessel::Key::Left
#define VSSL_KEY_DOWN            ::Vessel::Key::Down
#define VSSL_KEY_UP              ::Vessel::Key::Up
#define VSSL_KEY_PAGE_UP         ::Vessel::Key::PageUp
#define VSSL_KEY_PAGE_DOWN       ::Vessel::Key::PageDown
#define VSSL_KEY_HOME            ::Vessel::Key::Home
#define VSSL_KEY_END             ::Vessel::Key::End
#define VSSL_KEY_CAPS_LOCK       ::Vessel::Key::CapsLock
#define VSSL_KEY_SCROLL_LOCK     ::Vessel::Key::ScrollLock
#define VSSL_KEY_NUM_LOCK        ::Vessel::Key::NumLock
#define VSSL_KEY_PRINT_SCREEN    ::Vessel::Key::PrintScreen
#define VSSL_KEY_PAUSE           ::Vessel::Key::Pause
#define VSSL_KEY_F1              ::Vessel::Key::F1
#define VSSL_KEY_F2              ::Vessel::Key::F2
#define VSSL_KEY_F3              ::Vessel::Key::F3
#define VSSL_KEY_F4              ::Vessel::Key::F4
#define VSSL_KEY_F5              ::Vessel::Key::F5
#define VSSL_KEY_F6              ::Vessel::Key::F6
#define VSSL_KEY_F7              ::Vessel::Key::F7
#define VSSL_KEY_F8              ::Vessel::Key::F8
#define VSSL_KEY_F9              ::Vessel::Key::F9
#define VSSL_KEY_F10             ::Vessel::Key::F10
#define VSSL_KEY_F11             ::Vessel::Key::F11
#define VSSL_KEY_F12             ::Vessel::Key::F12
#define VSSL_KEY_F13             ::Vessel::Key::F13
#define VSSL_KEY_F14             ::Vessel::Key::F14
#define VSSL_KEY_F15             ::Vessel::Key::F15
#define VSSL_KEY_F16             ::Vessel::Key::F16
#define VSSL_KEY_F17             ::Vessel::Key::F17
#define VSSL_KEY_F18             ::Vessel::Key::F18
#define VSSL_KEY_F19             ::Vessel::Key::F19
#define VSSL_KEY_F20             ::Vessel::Key::F20
#define VSSL_KEY_F21             ::Vessel::Key::F21
#define VSSL_KEY_F22             ::Vessel::Key::F22
#define VSSL_KEY_F23             ::Vessel::Key::F23
#define VSSL_KEY_F24             ::Vessel::Key::F24
#define VSSL_KEY_F25             ::Vessel::Key::F25

/* Keypad */
#define VSSL_KEY_KP_0            ::Vessel::Key::KP0
#define VSSL_KEY_KP_1            ::Vessel::Key::KP1
#define VSSL_KEY_KP_2            ::Vessel::Key::KP2
#define VSSL_KEY_KP_3            ::Vessel::Key::KP3
#define VSSL_KEY_KP_4            ::Vessel::Key::KP4
#define VSSL_KEY_KP_5            ::Vessel::Key::KP5
#define VSSL_KEY_KP_6            ::Vessel::Key::KP6
#define VSSL_KEY_KP_7            ::Vessel::Key::KP7
#define VSSL_KEY_KP_8            ::Vessel::Key::KP8
#define VSSL_KEY_KP_9            ::Vessel::Key::KP9
#define VSSL_KEY_KP_DECIMAL      ::Vessel::Key::KPDecimal
#define VSSL_KEY_KP_DIVIDE       ::Vessel::Key::KPDivide
#define VSSL_KEY_KP_MULTIPLY     ::Vessel::Key::KPMultiply
#define VSSL_KEY_KP_SUBTRACT     ::Vessel::Key::KPSubtract
#define VSSL_KEY_KP_ADD          ::Vessel::Key::KPAdd
#define VSSL_KEY_KP_ENTER        ::Vessel::Key::KPEnter
#define VSSL_KEY_KP_EQUAL        ::Vessel::Key::KPEqual

#define VSSL_KEY_LEFT_SHIFT      ::Vessel::Key::LeftShift
#define VSSL_KEY_LEFT_CONTROL    ::Vessel::Key::LeftControl
#define VSSL_KEY_LEFT_ALT        ::Vessel::Key::LeftAlt
#define VSSL_KEY_LEFT_SUPER      ::Vessel::Key::LeftSuper
#define VSSL_KEY_RIGHT_SHIFT     ::Vessel::Key::RightShift
#define VSSL_KEY_RIGHT_CONTROL   ::Vessel::Key::RightControl
#define VSSL_KEY_RIGHT_ALT       ::Vessel::Key::RightAlt
#define VSSL_KEY_RIGHT_SUPER     ::Vessel::Key::RightSuper
#define VSSL_KEY_MENU            ::Vessel::Key::Menu

#define VSSL_KEY_LAST            VSSL_KEY_MENU
