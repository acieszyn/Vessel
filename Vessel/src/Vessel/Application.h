#pragma once

#include "Core.h"

namespace Vessel {

	class VESSEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}