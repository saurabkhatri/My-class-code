/*Author: Saurab khatri
Faculty: 27(CE/D)
Date: 6/18/2021
write a program to print numbers from 1 to 100 and
which are divisile by 5 and print sum.
*/

#include<stdio.h>
int main ()
{
int i,sum=0;

for(i=1;i<=100;i++)
{
if(i%5==0)
{
	printf("%d\n",i);
sum=sum+i;
}
}
printf("Sum of numbers divisible by 5 is %d",sum);
return 0;
}
