#pragma once

#include "Vessel.h"

class Sandbox2D : public Vessel::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Vessel::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Vessel::Event& e) override;
private:
	Vessel::OrthographicCameraController m_CameraController;

	// Temp
	Vessel::Ref<Vessel::VertexArray> m_SquareVA;
	Vessel::Ref<Vessel::Shader> m_FlatColorShader;
	Vessel::Ref<Vessel::Texture2D> m_CheckerboardTexture;

	struct ProfileResult
	{
		const char* Name;
		float Time;
	};

	std::vector<ProfileResult> m_ProfileResults;

	glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
};