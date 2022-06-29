/* NESTING OF LOOPS.
WAP to generate all armstrong number from 100 to 999*/

#include<stdio.h>
#include<math.h>
int main()
{
int n,sum,rem,i;
for(i=100;i<=999;i++)
{
n=i;
sum=0;
while(n>0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(sum==i)
{
printf("%d\t",sum);
}
}
return(0);
}
