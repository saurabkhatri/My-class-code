/*WAP to find reverse of given number using function*/
#include<stdio.h>
void rev(int);
int main()
{
int num;
printf("Enter number:");
scanf("%d",&num);
rev(num);
return 0;
}
void rev(int n)
{
int rem,r=0;
while(n>0)
{
rem=n%10;
r=r*10+rem;
n=n/10;
}
printf("reverse number is:%d",r);
}
