/*Author:Saurab khatri
Roll no:27(CE/D)
Date:6/23/2021
1.Write a program to generate fibonacci series upto n terms.*/

#include<stdio.h>
int main()
{
	
int i,n,a=0,b=1,c;
printf("enter value of n");
scanf("%d",&n);
printf("%d\t%d\t",a,b);
for(i=1;i<=n-2;i++)
{
	c=a+b;
	printf("%d\t",c);
	a=b;
	b=c;

}
return 0;
}
