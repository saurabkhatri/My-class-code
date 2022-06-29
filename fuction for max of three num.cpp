/*WAP to calculate maximum of 3 numbers*/
#include<stdio.h>
float max(float,float,float);
int main()
{
float a,b,c,result;
printf("Enter Three numbers:");
scanf("%f%f%f",&a,&b,&c);
result=max(a,b,c);
printf("maximum is:%f",result);
return 0;
}
float max(float x,float y,float z)
{
if(x>y &&x>z)
{
return(x);
}
if(y>z)
{
	return(y);
}
else
{
	return(z);
}
}
