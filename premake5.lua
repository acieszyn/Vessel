-- premake5.lua

workspace "Vessel"
	architecture "x64"

	configurations 
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "Vessel/vendor/GLFW/include"

include "Vessel/vendor/GLFW"

project "Vessel"
	location "Vessel"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "vsslpch.h"
	pchsource "Vessel/src/vsslpch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/src/",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}"
	}

	links
	{
		"GLFW",
		"opengl32.lib"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "on"
		systemversion "latest"

		defines
		{
			"VSSL_PLATFORM_WINDOWS",
			"VSSL_BUILD_DLL"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "VSSL_DEBUG"
		symbols "on"

	filter "configurations:Release"
		defines "VSSL_RELEASE"
		optimize "on"

	filter "configurations:Dist"
		defines "VSSL_DIST"
		optimize "on"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Vessel/vendor/spdlog/include",
		"Vessel/src"
	}

	links
	{
		"Vessel"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "on"
		systemversion "latest"

		defines
		{
			"VSSL_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "VSSL_DEBUG"
		symbols "on"

	filter "configurations:Release"
		defines "VSSL_RELEASE"
		optimize "on"

	filter "configurations:Dist"
		defines "VSSL_DIST"
		optimize "on"