#include<stdio.h>
int main()
{
int a[50],b[50],c[50],i,n;
printf("Enter the size in array :");
scanf("%d",&n);

printf("Enter the elements in array a :\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter the elements in array b :");
for(i=0;i<n;i++)
{
	scanf("%d",b[i]);
}
printf("\n elements in array a are :");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
return 0;
}
