/*Author: Saurab khatri
Faculty: 27(CE/D)
Date: 6/10/2021
2. Program to find to input the five sub and find the following.
a.percent>=80(distinction)
b.60-79(first division)
c.40-59(second division)
*/
#include<stdio.h>
int main ()
{
float s1,s2,s3,s4,s5, t, p;
printf("Enter marks in 5 subjects: ");
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
t=s1+s2+s3+s4+s5;
p=(t/500)*100;
if(s1>=40 && s2>=40 && s3>=40 && s4>=40 && s5>=40)
{
if(p>=80)
printf("DISTINCTION with %f %", p);
else if(p>=60 && p<=79)
printf("FIRST DIVISION with %f %",p);
else if(p>=40 && p<=59)
printf("SECOND DIVISION with %f %",p);
}
else
{
printf("THIRD DIVISION with %f %",p);
}
return 0;
}

