#include "pch.h"

#include "util.h"
#include "curl.h"

VOID Main() {
    Util::InitConsole();

    printf("Welcome To SkyFN\n");
    Sleep(1000);
    printf("Your Dream up in the Sky\n");
    Sleep(1000);

    InitCurl();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH)
        Main();

    return TRUE;
}
