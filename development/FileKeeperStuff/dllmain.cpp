// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "stdafx.h"
#include "ModuleContex.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
		ModuleContex::GetInstPtr()->SetModuleHandle(hModule);
		break;
	case DLL_PROCESS_DETACH:
//	case DLL_THREAD_DETACH:
		ModuleContex::ReleaseRC();
		break;
	}
	return TRUE;
}

