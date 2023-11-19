/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int isStrong(int num) {
    int orNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == orNum);
}
int findSmallestDigit(int num) {
    int smallest = 9; 
    while (num > 0) {
        int digit = num % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        num /= 10;
    }

    return smallest;
}
int main() {
	int value,number;
       char ch;
	printf("Enter your choice code : \n");
	scanf("%d",&value);
    switch (value) {
        case 1:
        	printf("Enter your Number : \n");
		scanf("%d",&number);	
    		printf("The smallest digit in %d is: %d\n", number, findSmallestDigit(number));
           break;
	case 2: 
		printf("Enter your Number : \n");
		scanf("%d",&number);
		 if (isStrong(number)) {printf("%d is a strong number.\n", number);} 
		 else {printf("%d is not a strong number.\n", number);}
            break; 
       case 3:
	printf("Enter the character : \n");
	char ch;
	scanf("%s ",&ch);
	if (ch>='a' && ch<'z'){
		char c = ch-32;
		printf("%c\n",c);}
	else{
		char c = ch+32;
		printf("%c\n",c);}
	

        default:
            printf("Invalid option\n");
    }

    return 0;
}

