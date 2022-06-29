/*Author:Saurab khatri
Roll no:27(CE/D)
Date:6/23/2021
10. WAP to generate Fibonacci series up to n terms. (Trace for n: 5)
ALTERNATIVE:
*/

#include<stdio.h>
int main ()
{
int i,n,a=-1,b=1,c;
printf("Enter value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}
return 0;
}
