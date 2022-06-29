/*Author:Saurab khatri
Roll no:27(CE/D)
Date:6/23/2021
/*Author: Ashmita Pandey
Roll: 1(CE/D)
Date:6/23/2021
11. WAP to check if the given number is prime or not. (Trace for: n: 5)
*/

#include<stdio.h>
int main ()
{
int i,n,count=0;
printf("Enter number to check: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count=count+1;
}
}
if(count==2)
{
printf("Prime number");
}
else
{
printf("Not a prime number");
}
return 0;
}
