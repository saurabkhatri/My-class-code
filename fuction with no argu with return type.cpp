//4. Functions with no arguments with return types.
#include<stdio.h>
int sum();
int main()
{
int result;
result=sum();
printf("sum:%d",result);
return 0;
}
int sum()//formal arguments
{
int a,b,c;
printf("Enter 2 numbers:");
scanf("%d%d",&a,&b);
c=a+b;
return(c);
}
