#include "vsslpch.h"
#include "Platform/OpenGL/OpenGLContext.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>


namespace Vessel {

	OpenGLContext::OpenGLContext(GLFWwindow* windowHandle)
		: m_WindowHandle(windowHandle)
	{
		VSSL_CORE_ASSERT(windowHandle, "Window handle is null!");
	}

	void OpenGLContext::Init()
	{
		VSSL_PROFILE_FUNCTION();

		glfwMakeContextCurrent(m_WindowHandle);
		int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		VSSL_CORE_ASSERT(status, "Failed to initialize Glad!");

		VSSL_CORE_INFO("OpenGL Info:");
		VSSL_CORE_INFO("|-Vendor: {0}", glGetString(GL_VENDOR));
		VSSL_CORE_INFO("|-Renderer: {0}", glGetString(GL_RENDERER));
		VSSL_CORE_INFO("|-Version: {0}", glGetString(GL_VERSION));
	}

	void OpenGLContext::SwapBuffers()
	{
		VSSL_PROFILE_FUNCTION();

		glfwSwapBuffers(m_WindowHandle);
	}

}	