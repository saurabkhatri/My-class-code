/* NESTING OF LOOPS.
WAP to print sum of given series:
cos(x)= 1-x^2/2!+x^4/4!-x^6/6!................*/

#include<stdio.h>
#include<math.h>
int main()
{
int n,i,j,sign=-1;
float sum=1,x,p;
printf("Enter number of terms: ");
scanf("%d",&n);
printf("\nEnter angle in degree: ");
scanf("%f",&x);
x=(3.14*x)/180; //to convert angle in radian
for(i=2;i<=n;i+=2)
{
int fact=1;
p=1;
for(j=1;j<=i;j++)
{
p*=x; //numerator
fact*=j; //denominator
}
sum=sum+sign*p/(float)fact;
sign=sign*-1; //for changing sign for next term
}
printf("Cosine of given angle is: %f",sum);
return(0);
}
