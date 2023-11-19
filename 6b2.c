/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include<stdio.h>
int pro(int m , int n){
if(n == 1){
return m;}
else if(n==0){
return 0 ; }
else{
return m + pro(m , n-1);}
} 
int main(){
int x , y ;
printf("enter 1st no.:");
scanf("%d",&x);
printf("enter 2nd no.:");
scanf("%d",&y);
printf("product is = %d \n" , pro(x , y));
return 0;
}
