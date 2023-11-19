/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }


        for (int k = 1; k <= (2 * i) - 1; k++) {
            printf("$");
        }

        printf("\n");
    }

    return 0;
}
