/*Author: Saurab khatri
Faculty: 27(CE/D)
Date: 6/11/2021
9.WAP to find roots of a quadratic equation when coefficients are entered by user.*/

//#include<stdio.>
#include<stdio.h>
int main ()
{
int unit,bill;
printf("Enter units consumed.");
scanf("%d",&unit);
if(unit<=100)
{
bill=50+ 8*unit;
printf("Your bill is: %d",bill);
}
else if(unit<=300)
{
bill=50+ 8*100+ (unit-100)*12;
printf("Your bill is: %d",bill);
}
else
{
bill=50+ 8*100+ 12*200+ (unit-300)*15;
printf("Your bill is: %d",bill);
}
return 0;
}
