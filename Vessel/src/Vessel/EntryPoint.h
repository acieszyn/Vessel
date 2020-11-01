#pragma once

#ifdef VSSL_PLATFORM_WINDOWS

extern Vessel::Application* Vessel::CreateApplication();

int main(int argc, char** argv)
{

	auto app = Vessel::CreateApplication();
	app->Run();
	delete app;
}

#endif