/*Saurab khatri
201327 CE/day
wap to generate all prime num from 1 to 500 */

#include<stdio.h>
#include<math.h>
int main ()
{
	int n,i,j,rem,count;
	for (i=1;i<=400;i++)
	{
		n=i;
		count=0;
		for(j=1;j<=n;j++)
		{
			if (n%j==0)
			{
				count+=1;
			}
		}
		if (count==2)
		{
			printf("%d\t",n);
		}
	}
	return 0;
	
}
