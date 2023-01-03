#include "Application.h"
#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Hazel::Application* Hazel::CreateAplication()
{
	return new Sandbox();
}