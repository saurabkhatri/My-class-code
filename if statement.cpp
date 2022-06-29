/*Author: Saurab khatri
Faculty: 27(CE/D)
Date: 6/11/2021
8. WAP to find whether year is leap year or not.
(A year that is exactly divisible by
four is a leap year, except for a year
that is exactly divisible by 100 but, the year is a
leap year if it is exactly divisible by 400).
ALTERNATIVE METHOD*/

#include<stdio.h>
int main ()
{
int year;
printf("Enter a year to check: ");
scanf("%d",&year);
if(year%4==0 && year%100!=0 || year%400==0)
{
printf("Leap year");
}
else
{
printf("Not a leap year");
}
return 0;
}
