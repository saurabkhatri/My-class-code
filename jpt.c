#include<stdio.h>
int main()
{
	char name[] ="PROGRAMMING";
	int i,j;
	for(i=10;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",name[j]);
		}
		printf("\n");
	}
}
