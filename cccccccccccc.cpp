/*Author:Saurab khatri
Roll no:27(CE/D)
Date:5/20/2021
1.Write a program to calculate the result of cb3/d2.
(Read the value of c, b, d from the user).*/

#include<stdio.h>
#include<math.h>
int main()
{
    float c,b,d;
    float a;
    printf("Enter the values for c,b and d");
    scanf("%f%f%f",&c,&b,&d);
    a=(c*pow(b,3))/pow(d,2);
    printf("The resultant value for the exopression is: %f",a);
    
     
	return 0;
}
