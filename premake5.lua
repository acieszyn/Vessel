-- premake5.lua

workspace "Vessel"
	architecture "x64"
	startproject "Sandbox"

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
IncludeDir["Glad"] = "Vessel/vendor/Glad/include"
IncludeDir["ImGui"] = "Vessel/vendor/imgui"
IncludeDir["glm"] = "Vessel/vendor/glm"
IncludeDir["stb_image"] = "Vessel/vendor/stb_image"

group "Dependencies"
	include "Vessel/vendor/GLFW"
	include "Vessel/vendor/Glad"
	include "Vessel/vendor/imgui"
group ""

project "Vessel"
	location "Vessel"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "vsslpch.h"
	pchsource "Vessel/src/vsslpch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/vendor/stb_image/**.h",
		"%{prj.name}/vendor/stb_image/**.cpp",
		"%{prj.name}/vendor/glm/glm/**.hpp",
		"%{prj.name}/vendor/glm/glm/**.inl"
	}

	defines
	{
		"_CRT_SECURE_NO_WARNINGS"
	}

	includedirs
	{
		"%{prj.name}/src/",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}",
		"%{IncludeDir.Glad}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.stb_image}"
	}

	links
	{
		"GLFW",
		"Glad",
		"ImGui",
		"opengl32.lib"
	}

	filter "system:windows"
		systemversion "latest"

		defines
		{
			"VSSL_PLATFORM_WINDOWS",
			"VSSL_BUILD_DLL",
			"GLFW_INCLUDE_NONE"
		}

	filter "configurations:Debug"
		defines "VSSL_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "VSSL_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "VSSL_DIST"
		runtime "Release"
		optimize "on"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

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
		"Vessel/src",
		"Vessel/vendor",
		"%{IncludeDir.glm}"
	}

	links
	{
		"Vessel"
	}

	filter "system:windows"
		systemversion "latest"

		defines
		{
			"VSSL_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "VSSL_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "VSSL_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "VSSL_DIST"
		runtime "Release"
		optimize "on"
