#pragma once

#ifdef PLATFORM_WIN
	#ifdef BUILD_DLL
		#define HAN_API _declspec(dllexport)
	#else // DEBUG
		#define HAN_API _declspec(dllimport)
	#endif
#else
	#error only support Windows!
#endif // PLATFORM_WIN


#define BIT(x) (1 << x)