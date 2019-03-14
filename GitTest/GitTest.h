#pragma once

#ifdef FILATOVDLL_EXPORTS
#define FILATOVDLL_API __declspec(dllexport)
#else
#define FILATOVDLL_API __declspec(dllimport)
#endif

extern "C" FILATOVDLL_API int MyInfo();
