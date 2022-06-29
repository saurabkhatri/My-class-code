//2.Function with arguments and no return type
#include<stdio.h>
void sum(int, int);//function declaration
int main()
{
int a,b;
printf("Enter numbers to add:");
scanf("%d%d",&a,&b);
sum(a,b);//actual arguments
return 0;
}
void sum(int x,int y)//formal arguments
{
int z;
z=x+y;
printf("sum:%d",z);
}
