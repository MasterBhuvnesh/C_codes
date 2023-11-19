/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>
int reverseNumber(int n, int result) {
    if (n == 0) {
        return result;
    } else {
        int reminder = n % 10;
        result = (result * 10) + reminder;
        return reverseNumber(n / 10, result);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is the reverse of the number %d\n",reverseNumber(num, 0), num);
    return 0;
}
