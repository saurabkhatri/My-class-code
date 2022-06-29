/*WAP to calculate maximum of 2 numbers*/
#include<stdio.h>
float max(float,float);
int main()
{
float a,b,result;
printf("Enter two numbers:");
scanf("%f%f",&a,&b);
result=max(a,b);
printf("maximum is:%f",result);
return 0;
}
float max(float x,float y)
{
if(x>y)
{
return(x);
}
else
{
	return(y);
}
}
