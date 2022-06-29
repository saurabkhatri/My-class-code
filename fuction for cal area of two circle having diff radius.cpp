/*WAP to calulate area of two circles having diff radius using same function*/
#include<stdio.h>
void area(int);
int main()
{
int r1,r2;
printf("enter radius 1:");
scanf("%d",&r1);
area(r1);
printf("\nenter radius 2:");
scanf("%d",&r2);
area(r2);
return 0;
}
void area(int r)
{
float a;
a=3.14*r*r;
printf("area of circle:%f\n",a);
}
