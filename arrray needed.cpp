/*
WAP to enter m*n order of matrix and display it
*/
#include<stdio.h>
int main()
{
	int m,n,a[100][100],i,j;
	printf("enter the row and column for array a=\n");
	scanf("%d%d",&m,&n);
	
	 	printf("enter the elements of array a are = ");
	for(i=0;i<m;i++)//for the rows
     {
     	for(j=0;j<n;j++)
     	 {
     	 	scanf("%d",&a[i][j]);
		  }
	 }
	printf("the elements of array b(compile time) are = \n");
	for(i=0;i<m;i++)//for the rows
     {
     	for(j=0;j<n;j++)
     	 {
     	 	printf("%d\t",a[i][j]);
		  }
		  printf("\n");
	 }

	return 0;
}
