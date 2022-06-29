/*WAP to input n numbers in first array and copy them in second array. */
#include<stdio.h>
int main()
{
int a[100],i,n,b[100];
printf("Enter size of array : ");
scanf("%d",&n);

 printf("Enter the elements in array a: \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe elements in array a are: \n");
for (i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
for(i=0;i<n;i++)
{
b[i]=a[i];
}
printf("\nThe elements in array b are: \n");
for (i=0;i<n;i++)
{
printf("%d\t",b[i]);
}
return 0;
}
