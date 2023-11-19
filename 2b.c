/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include<stdio.h>
int main(){

int customer_id,unit;
char str[100];
printf("\nEnter your Name : ");
fgets(str,sizeof(str),stdin);
double value=0;
printf("\nEnter the your Customer ID : ");
scanf("%d",&customer_id);
printf("\nEnter the amount of unit you consumed : ");
scanf("%d",&unit);
printf("\nYour  Customer's ID is  : %d",customer_id);
printf("\nyour Customer's Name is : %s",str);
if (unit>0 && 150>=unit)
{
    value=(3*unit);
}
else if (unit>151 && 350>=unit)
{
    value=((unit-150)*3.75)+100;
}
else if (unit>351 && 450>=unit)
{
    value=((unit-350)*4)+250;
}
else if (unit>451 && 600>=unit)
{
    value=((unit-450)*4.5)+300;
}
else if (600<unit)
{
    value=((unit-600)*5)+400;
}
else
{
    printf("Not Valid");
}
printf("You have consumed RS %.2lf for %d unit \n",value,unit);

}
