/*Saurab khatri
201327 CE/day
wap to prinrt the sine series. 
sinx= x- (x^3/3!) + (X^%/5!) .......
*/
#include<stdio.h>
#include<math.h>
int main ()
{
	int n,i,j,sign=1;
	float sum=0,x,p;
	printf("Enter number of terms :");
	scanf("%d",&n);
	printf("\nEnter angle in degree:");
	scanf("%f",&x);
	x=(3.14*x)/180;
	for(i=1;i<=n;i+=2)
	{
		int fact=1;
		p=1;
		for(j=1;j<=i;j++)
		{
			p*=x;
			fact*=j;
				}
				sum=sum+sign*p/(float)fact;
				sign=sign*-1;
	}
	printf("sine of given angle is: %f",sum);
     return 0;
	
}
