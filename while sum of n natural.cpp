/*Author: Saurab khatri
Faculty: 27(CE/D)
Date: 6/25/2021
/*Author: Saurab khatri
Roll: 27(CE)
Date:06/24/2021
1.WAP to find factorial of numbers.
*/

#include <stdio.h>

int main()
{
int i,n,fact=1;
printf("Enter value of n:");
scanf("%d",&n);
i=1;
while(i<=n)
{
fact=fact*i;
printf("%d",fact);
i++;
}
return 0;
}
