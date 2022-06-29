/*WAP to enter m*n order matrix and find the sum of all elements*/
#include<stdio.h>
int main()
{
int a[20][20],i,j,m,n,sum=0;
printf("Enter order of matrix:\n");
scanf("%d%d",&m,&n);
printf("Enter elements for array a\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The elements of array a are:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
sum=sum+a[i][j];
}
}
printf("Sum: %d",sum);
return 0;
}
