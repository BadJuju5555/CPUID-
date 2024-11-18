#include <Windows.h>
#include <intrin.h>

extern "C" _declspec(dllexport) void _stdcall GetCPUID(DWORD dwFunction, DWORD* pEAX, DWORD* pEBX, DWORD* pECX, DWORD* pEDX)
{
	int CPUInfo[4] = { -1 };
	__cpuid(CPUInfo, dwFunction);

	*pEAX = CPUInfo[0];
	*pEBX = CPUInfo[1];
	*pECX = CPUInfo[2];
	*pEDX = CPUInfo[3];
}