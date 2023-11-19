/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int count[256] = {0};
    int maxCount = 0;
    char maxChar;
    for (int i = 0; i < strlen(str); i++) {
        char currentChar = str[i];
        count[currentChar]++;
        if (count[currentChar] > maxCount) {
            maxCount = count[currentChar];
            maxChar = currentChar;
        }
    }
    printf("Maximum occurring character: %c\n", maxChar);
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("'%c' occurs %d times\n", i, count[i]);
        }
    }
    return 0;
}
