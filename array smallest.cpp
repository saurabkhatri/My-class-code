#include<stdio.h>
int main()
{
int a[100],i,j,large,n;
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
large=a[0];
for(i=1;i<n;i++)
{
if(large<a[i])
{
large=a[i];
}
}
printf("\nlargest element in array a is %d",large);
return 0;
}
