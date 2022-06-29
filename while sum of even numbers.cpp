/*Author: Saurab khatri
Faculty: 27(CE/D)
Date: 6/25/2021
3.WAp to find the sum of n even numbers.*/

#include <stdio.h>
int main()
{
int i=1,sum=0,n; //initialization
printf("enter value of n: ");
scanf("%d",&n);
while(i<=n) //condition
{
if(i%2==0)
{
sum=sum+i;
}
i++;
}
printf("sum of odd numbers upto n terms is %d",sum);
return 0;
}
