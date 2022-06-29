/*WAP to generate fibonacci series upto nth terms using function*/
#include<stdio.h>
void fib(int);
int main()
{
int num;
printf("Enter term:");
scanf("%d",&num);
fib(num);
return 0;
}
void fib(int n)
{
int a=0,b=1,c,i;
printf("%d\t%d\t",a,b);
for(i=1;i<=n-2;i++)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}
}
