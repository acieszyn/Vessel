#include "vsslpch.h"
#include "RenderCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace Vessel {

	RendererAPI* RenderCommand::s_RendererAPI = new OpenGLRendererAPI();

} 