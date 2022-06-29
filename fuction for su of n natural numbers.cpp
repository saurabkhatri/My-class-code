/*WAP to calculate sum of n natural numbers*/
#include<stdio.h>
int sum(int);
int main()
{
int result,num;
printf("Enter number:");
scanf("%d",&num);
result=sum(num);
printf("sum:%d",result);
return 0;
}
int sum(int n)
{
int s=0,i;
for(i=1;i<=n;i++)
{
s=s+i;
}
return(s);
}
