#include "vsslpch.h"
#include "Vessel/Renderer/VertexArray.h"

#include "Vessel/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLVertexArray.h"

namespace Vessel {

	Ref<VertexArray> VertexArray::Create()
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None: VSSL_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
		case RendererAPI::API::OpenGL: return CreateRef<OpenGLVertexArray>();
		}

		VSSL_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}
