/*WAP to input elements in 2 array a and array b, add elements of 2 arrays and store it
in array c and display c*/
#include<stdio.h>
int main()
{
int a[100],i,n,b[100],c[100];
printf("Enter size of array : ");
scanf("%d",&n);

 printf("Enter the elements in array a: \n");//input array a
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements in array b: \n");//input array b
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
printf("\nThe elements in array a are: \n");//display array a
for (i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\nThe elements in array b are: \n");//display array b
for (i=0;i<n;i++)
{
printf("%d\t",b[i]);
}
printf("\nThe elements in array c are: \n");//display the sum
for (i=0;i<n;i++)
{
c[i]=a[i]+b[i];
printf("%d\t",c[i]);
}
return 0;
}
