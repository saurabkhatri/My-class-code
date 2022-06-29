//1.Function with no arguments and no return type
#include<stdio.h>
void sum();//function declaration
int main()
{
sum();//function call
return 0;
}
void sum()//function defination
{
int a,b,c;
printf("Enter numbers to add:");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum:%d",c);
}
