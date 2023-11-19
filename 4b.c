/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>

void func(int num1, int num2) {
    char op;
    scanf(" %c", &op);

printf("your output will be : %d \n", num1 + num2);
printf("your output will be : %d \n", num1 - num2);
printf("your output will be : %d \n", num1 * num2);
if (num2 != 0) {printf("your output will be : %d \n", num1 / num2);} 
else {printf("Division by zero is not allowed. \n");}
}

int main() {
    char value;
    printf("Enter the Action that you want to perform:\nA --> For Calculation\nB --> For Comparison\nC --> Check Odd or Even\n");
    scanf(" %c", &value); 

    printf("Enter Two Numbers:\n");
    int num1, num2;
    scanf("%d %d", &num1, &num2); 

    printf("Enter your Operation:\n");
    switch (value) {
        case 'A': 
            func(num1, num2);
            break;
        case 'B':
            if (num1 == num2) {
                printf("%d is equal %d \n", num1, num2);
            } else if (num1 > num2) {
                printf("%d is greater than %d \n", num1, num2);
            } else {
                printf("%d is smaller than %d \n", num1, num2);
            }
            break; 
        case 'C':
	(num1 % 2 == 0) ? printf("%d is Even Number \n", num1): printf("%d is Odd Number \n", num1);
            (num2 % 2 == 0) ? printf("%d is Even Number \n", num2): printf("%d is Odd Number \n", num2);

        default:
            printf("Invalid option");
    }

    return 0;
}

