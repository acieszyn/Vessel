#pragma once

#ifdef VSSL_PLATFORM_WINDOWS

extern Vessel::Application* Vessel::CreateApplication();

int main(int argc, char** argv)
{
	Vessel::Log::Init();
	VSSL_CORE_WARN("Initialized Log!");
	int a = 5;
	VSSL_INFO("Hello! Var={0}", a);

	auto app = Vessel::CreateApplication();
	app->Run();
	delete app;
}

#endif