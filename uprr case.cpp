/*Author: Saurab khatri
Faculty: 27(CE/D)
Date: 6/10/2021
1. program to find to the largest number.
*/

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("enter three num");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b)
{
	if(a>c)
	{
		printf("%d is largest",a);
	}
	else
	{
		printf("%d is largest",c);
	}
}
else 
{
	if(b>c)
	{
		printf("%d is largest",b);
	
}
else
{
	printf("%d is largest",c);
}
}

return 0;
}
