#pragma once

#include "Log.h"

#ifdef HW_PLATFORM_WINDOWS

extern Howling::Application* Howling::CreateApplication();

int main(int argc, char** argv)
{
	Howling::Log::Init();
	HW_CORE_WARN("Initialized Log!");
	int a = 5;
	HW_INFO("Hello! Var = (0)", a);
	
	auto app = Howling::CreateApplication();
	app->Run();
	delete app;
}

#endif