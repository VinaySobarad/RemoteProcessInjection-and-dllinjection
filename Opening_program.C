#include<windows.h>
#include<stdio.h>
int main(void){

STARTUPINFOW si = { 0 };
PROCESS_INFORMATION pi = { 0 };

    if(!CreateProcessW(
        L"C:\\Windows\\System32\\notepad.exe",     
        NULL,
        NULL,
        NULL,
        FALSE,
        BELOW_NORMAL_PRIORITY_CLASS,
        NULL,
        NULL,
        &si,
        &pi)
        ){
        printf("(-) failed to create process");
        return EXIT_FAILURE;

    }
    printf("(+) Procrss started pid: %d", pi.dwProcessId);
    return EXIT_SUCCESS;
}