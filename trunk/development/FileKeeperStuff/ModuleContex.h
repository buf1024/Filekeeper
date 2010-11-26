#pragma once

#include "Singleton.h"
#include <ShTypes.h>
#include <ObjIdl.h>
#include <ShlObj.h>
using namespace lgc;

class ModuleContex : public Singleton<ModuleContex>
{
public:
	ModuleContex(void);
	~ModuleContex(void);

public:
	HMODULE STDMETHODCALLTYPE GetModuleHandle();
	VOID STDMETHODCALLTYPE SetModuleHandle(HMODULE hModule);
	ULONG STDMETHODCALLTYPE GetLockNum();
	ULONG STDMETHODCALLTYPE GetUsageNum();

	ULONG STDMETHODCALLTYPE AddRefLockNum();
	ULONG STDMETHODCALLTYPE ReleaseLockNum();

	ULONG STDMETHODCALLTYPE AddRefUsageNum();
	ULONG STDMETHODCALLTYPE ReleaseUsageNum();


	PIDLIST_ABSOLUTE GetPIDLFolder();
	void SetPIDLFolder(PIDLIST_ABSOLUTE pidlFoder);

	IDataObject* GetDataObject();
	void SetDataObject(IDataObject* pObj);

	HKEY GetFolderHEY();
	void SetFolderHEY(HKEY hKey);

private:
	HMODULE m_hModule;
	ULONG m_nLockNum;
	ULONG m_nUseNum;

	//Context Data
	PIDLIST_ABSOLUTE m_pPidlFolder;
	IDataObject *m_pDtObj;
	HKEY m_hkeyProgID;
};