/*WAP to declare two 2D arrays and do compile time initialization for the
first one and run time for the second. Also display both arrays*/
#include<stdio.h>
int main()
{
int a[3][3]={{1,1,1},{2,2,2},{3,3,3}},b[3][3],i,j;
printf("The elements of array a(compile time initialization) are:\n");
for(i=0;i<3;i++)//rows
{
for(j=0;j<3;j++)//column
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("Enter elements for array b(run time initialization)\n");
for(i=0;i<3;i++)//rows
{
for(j=0;j<3;j++)//column
{
scanf("%d",&b[i][j]);
}
}
printf("The elements of array b are:\n");
for(i=0;i<3;i++)//rows
{
for(j=0;j<3;j++)//column
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
return 0;
}
