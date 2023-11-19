/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    printf("The %dth Fibonacci number is: %d\n", num, fibonacci(num));
    return 0;
}
