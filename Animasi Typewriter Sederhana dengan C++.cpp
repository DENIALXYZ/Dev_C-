#include <cstdio>
#include <windows.h>

int main(){
    char *setring = "Selamat Malam Dunia..!";
    for(int i=0;i<strlen(setring);i++){
        printf("%c",*(setring + i));
        Sleep(200);
    }
    putchar('\n');
    system("pause");
    return 0;
}
