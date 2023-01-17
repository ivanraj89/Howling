#pragma once

#ifdef HW_PLATFORM_WINDOWS

extern Howling::Application* Howling::CreateApplication();

int main(int argc, char** argv)
{
	
	auto app = Howling::CreateApplication();
	app->Run();
	delete app;
}

#endif