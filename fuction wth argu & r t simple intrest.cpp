/*WAP to calculate Simple Interest and print
result inside main()*/
#include<stdio.h>
float SI();
int main()
{
float result;
result=SI();
printf("simple interest:%f",result);
return 0;
}
float SI()
{
int p,t;
float r,i;
printf("Enter principal, rate and time:");
scanf("%d%f%d",&p,&r,&t);
i=(p*t*r)/100.0;
return(i);
}

