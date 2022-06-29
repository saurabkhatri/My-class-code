/*Author: Saurab khatri
Faculty: 27(CE/D)
Date: 6/25/2021
/*Author: Ashmita Pandey
Roll: 1(CE/D)
Date:6/23/2021
g) WAP to check for perfect number (a perfect number is a positive integer
that is equal to the sum of its positive divisors, excluding the number itself. For instance,
6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number.)
*/

#include <stdio.h>
int main()
{
int n,i=1,sum=0,rem;
printf("Enter number to check: ");
scanf("%d",&n);
while(i<n)
{
if(n%i==0)
{
sum=sum+i;
}
i++;
}
if(sum==n)
{
printf("%d IS A PERFECT NUMBER",n);
}
else
{
printf("%d IS NOT A PERFECT NUMBER",n);
}
return 0;
}
