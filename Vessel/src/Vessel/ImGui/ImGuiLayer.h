#pragma once

#include "Vessel/Layer.h"

#include "Vessel/Events/KeyEvent.h"
#include "Vessel/Events/MouseEvent.h"
#include "Vessel/Events/ApplicationEvent.h"

namespace Vessel {

	class VESSEL_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;

		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}