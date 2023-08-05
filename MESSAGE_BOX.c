#include<stdio.h>
#include<windows.h>
int main(void){
    MessageBoxW(
        NULL, 
        L"ABCDE", 
        L"XYZ", 
        MB_YESNO | MB_ICONEXCLAMATION);
    return EXIT_SUCCESS;
}