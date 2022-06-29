/*WAP to input m*n order of matrix and find sum of next/ right diagonal elements*/
#include<stdio.h>
int main()
{
int a[20][20],i,j,m,n,sum=0;
printf("Enter order of matrix:\n");
scanf("%d%d",&m,&n);
//input array a
printf("Enter elements for array a\n");
for(i=0;i<m;i++)//row
{
for(j=0;j<n;j++)//column
{
scanf("%d",&a[i][j]);
}
}
//display array a
printf("The elements of array a are:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
//main diagonal sum of array a
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i+j==m-1)//right/next diagonal
sum+=a[i][j];
}
}
printf("sum of next/right diagonal:%d",sum);
return 0;
}
