#pragma once
#include "stdafx.h"

HANDLE hookProcessLoadLibrary(HANDLE hProcess, WCHAR* dllToInject);

bool ContainsRPCModule(DWORD dwPID);

void classicHookRPCProcesses(DWORD processID, wchar_t* dllToInject);

bool PESelfInjectToRemoteProcess(DWORD processID, wchar_t* procName);