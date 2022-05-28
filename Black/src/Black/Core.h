#pragma once
#ifdef BK_PLATFORM_WINDOWS
	#ifdef BK_BUILD_DLL
		#define BLACK_API __declspec(dllexport)
	#else
		#define BLACK_API __declspec(dllimport)
	#endif
#else
	#error Black only support Windows!
#endif // BK_PLATFORM_WINDOWS
