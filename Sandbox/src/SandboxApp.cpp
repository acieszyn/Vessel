#include <Vessel.h>

class Sandbox : public Vessel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Vessel::Application* Vessel::CreateApplication()
{
	return new Sandbox();
}