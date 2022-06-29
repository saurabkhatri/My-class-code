/*WAP to calculate factorial of given number*/
#include<stdio.h>
int SI(int);
int main()
{
int result,num;
printf("Enter number to compute factorial:");
scanf("%d",&num);
result=SI(num);
printf("Factorial:%d",result);
return 0;
}
int SI(int n)
{
int fact=1,i;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return(fact);
}
