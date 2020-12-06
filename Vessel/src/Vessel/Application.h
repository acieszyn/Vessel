#pragma once

#include "Core.h"

#include "Window.h"
#include "Vessel/LayerStack.h"
#include "Vessel/Events/Event.h"
#include "Vessel/Events/ApplicationEvent.h"

#include "Vessel/Core/Timestep.h"

#include "Vessel/ImGui/ImGuiLayer.h"

namespace Vessel {

	class Application
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
		bool OnWindowResize(WindowResizeEvent& e);
	private:
		std::unique_ptr<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		bool m_Minimized = false;
		LayerStack m_LayerStack;
		float m_LastFrameTime = 0.0f;
	private:
		static Application* s_Instance;
	};

	Application* CreateApplication();
}
