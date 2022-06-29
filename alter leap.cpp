/*Author: Saurab khatri
Faculty: 27(CE/D)
Date: 6/11/2021
9.WAP to find roots of a quadratic equation when coefficients are entered by user.*/

#include<stdio.h>
#include<math.h>
int main ()
{
float a,b,c,D,x,y;
printf("Enter coefficient of the quadratic equation: ");
scanf("%f%f%f",&a,&b,&c);
D=pow(b,2)-4*a*c;
if(D<0)
{
printf("Roots are imaginary.");
}
else if(D==0)
{
printf("The roots are equal.");
x=y=(-b)/(2*a);
printf("Roots are: %f and %f",x,y);
}
else if(D>0)
{
printf("The roots are real and distinct.");
x=(-b+sqrt(D))/(2*a);
y=(-b-sqrt(D))/(2*a);
printf("Roots are: %f and %f",x,y);
}
return 0;
}
