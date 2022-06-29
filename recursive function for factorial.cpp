/*Recursive function
WAP to find factorial of given number using resurcive function*/
#include<stdio.h>
int fact(int);
int main()
{
int num,result;
printf("Enter number:");
scanf("%d",&num);
result=fact(num);
printf("factorial:%d",result);
return 0;
}
int fact(int n)
{
if(n==1)
return(1);
else
return(n*fact(n-1));
}
