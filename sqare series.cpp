/*Author:Saurab khatri
Roll no:27(CE/D)
Date:6/23/2021
13. WAP to evaluate following series: 1+1/2^2+1/3^2+1/4^2………..
*/

#include<stdio.h>
int main ()
{
int i,n;
float sum=0;
printf("Enter value of n : ");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
sum=sum+(1.0/(i*i));
}
printf("sum: %f",sum);
return 0;
}
