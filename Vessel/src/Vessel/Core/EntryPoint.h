#pragma once

#ifdef VSSL_PLATFORM_WINDOWS

extern Vessel::Application* Vessel::CreateApplication();

int main(int argc, char** argv)
{
	Vessel::Log::Init();

	VSSL_PROFILE_BEGIN_SESSION("Startup", "VesselProfile-Startup.json");
	auto app = Vessel::CreateApplication();
	VSSL_PROFILE_END_SESSION();

	VSSL_PROFILE_BEGIN_SESSION("Runtime", "VesselProfile-Runtime.json");
	app->Run();
	VSSL_PROFILE_END_SESSION();

	VSSL_PROFILE_BEGIN_SESSION("Shutdown", "VesselProfile-Shutdown.json");
	delete app;
	VSSL_PROFILE_END_SESSION();
}

#endif