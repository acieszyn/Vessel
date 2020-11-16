#include <Vessel.h>

#include "imgui/imgui.h"

class ExampleLayer : public Vessel::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		if (Vessel::Input::IsKeyPressed(VSSL_KEY_TAB))
			VSSL_TRACE("Tab key is pressed!");
	}

	virtual void OnImGuiRender() override
	{
		ImGui::Begin("Test");
		ImGui::Text("Hello World");
		ImGui::End();
	}

	void OnEvent(Vessel::Event& event) override
	{
		// VSSL_TRACE("{0}", event);
	}
};

class Sandbox : public Vessel::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}
};

Vessel::Application* Vessel::CreateApplication()
{
	return new Sandbox();
}