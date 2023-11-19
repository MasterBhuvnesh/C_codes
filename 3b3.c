/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>

int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }

        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}
