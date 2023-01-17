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



int main() 
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}