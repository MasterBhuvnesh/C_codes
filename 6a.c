/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>
#include <string.h>

int palindrome(char str[100])
{
    int i, len, flag = 0; 
    len = strlen(str);
    for (i = 0; i < len; i++) 
    {

        if (str[i] != str[len - i - 1]) {
            return flag = 1;
            break;
        }
        return flag = 0;
    }
}
int main() 
{
	char str[100];
    printf("Enter your string :\n");
	scanf("%s",str);
    if (palindrome(str))
        printf("%s is not palindrome", str);
    else
        printf("%s is palindrome", str);  
    return 0;
}
