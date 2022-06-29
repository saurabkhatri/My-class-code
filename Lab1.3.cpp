/*Author:DEEPAK CHHETRI
Roll no:09(CE/D)
Date:5/17/2021
1.Write a program to print number entered by user!.
*/
#include<stdio.h>
int main()
{
	int a,b,s,z,p;
    printf("Enter two numbers to be computed ;\n");
	scanf("%d%d",&a,&b);
	s=a+b;
	z=a-b;
	p=a*b;
    printf("The sum is %d",s);
    printf("the differnce is %d",z);
    printf("the product is %d",p);
    return 0;
}
