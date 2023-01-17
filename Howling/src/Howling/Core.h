#pragma once

#ifdef HW_PLATFORM_WINDOWS
	#ifdef HW_BUILD_DLL
		#define HOWLING_API __declspec(dllexport)
	#else
		#define HOWLING_API __declspec(dllimport)
	#endif
#else
	#error Howling only support Windows!
#endif