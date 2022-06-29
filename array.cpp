
#include<stdio.h>
int main()
{
	int m,n,a[100],i,j;
	printf("enter the row and column for array a=\n");
	scanf("%d%d",&m,&n);
	
	 	printf("enter the elements of array a are :\n ");
	for(i=0;i<m;i++)//for the rows
     {
     	for(j=0;j<n;j++)
     	 {
     	 	scanf("%d",&a[i][j]);
		  }
	 }
	printf("the elements of array a are = \n");
	for(i=0;i<m;i++)//for the rows
     {
     	for(j=0;j<n;j++)
     	 {
     	 	printf("%d\t",a[i][j]);
		  }
		  printf("\n");
	 }
	 printf("The transpose of array a are :\n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<m;j++)
	 	{
	 		printf("%d\t",a[j][i]);
		 }
		 printf("\n");
	 }

	return 0;
}
