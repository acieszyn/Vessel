#pragma once

#include "Core.h"

#include "Window.h"
#include "Vessel/LayerStack.h"
#include "Vessel/Events/Event.h"
#include "Vessel/Events/ApplicationEvent.h"

namespace Vessel {

	class VESSEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);

		inline static Application& Get() { return *s_Instance;  }

		inline Window& GetWindow() { return *m_Window;  }
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	private:
		static Application* s_Instance;
	};

	Application* CreateApplication();
}