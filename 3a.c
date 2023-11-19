/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>

int main() {
    double n;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%lf", &n);

    for (int i = 1; i <= n; i++) {
        double factorial = 1.0;
               
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        
        sum += (i / factorial);
    }

    printf("The sum of the series is: %lf", sum);
    return 0;
}
/*
Output:
Enter a number: 4
The sum of the series is: 2.666667
*/