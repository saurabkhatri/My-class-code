/*NESTING OF LOOP
WAP to print sum of following series:
1+1/x+1/x^2+1/x^3+................
*/
#include<stdio.h>
#include<math.h>
int main( )
{
int n,i;
float sum=0,x;
printf("Enter number of terms: ");
scanf("%d",&n);
printf("Enter value of x: ");
scanf("%f",&x);
for(i=0;i<n;i++)
{
sum+=1/pow(x,i);
}
printf("Sum: %f",sum);
return 0;
}
