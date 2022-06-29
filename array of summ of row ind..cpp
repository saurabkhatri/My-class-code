/*WAP to input m*n order of matrix and find sum of individual rows*/
#include<stdio.h>
int main()
{
int a[20][20],i,j,m,n,sum;
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
//sum of individual row
for(i=0;i<m;i++)
{
sum=0;
for(j=0;j<n;j++)
{
sum+=a[i][j];
}
printf("sum of %d row: %d\n",i+1,sum);
}

 return 0;
}
