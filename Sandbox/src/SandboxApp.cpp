#include <Howling.h>

class Sandbox : public Howling::Application 
{
public:
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}
};


Howling::Application* Howling::CreateApplication()
{
	return new Sandbox();
}