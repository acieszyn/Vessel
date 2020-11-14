#include <Vessel.h>

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
		PushOverlay(new Vessel::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

Vessel::Application* Vessel::CreateApplication()
{
	return new Sandbox();
}