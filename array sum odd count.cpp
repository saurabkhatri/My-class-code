/*WAP to input n numbers in an array and find the sum of
odd and even numbers and count. */
#include<stdio.h>
int main()
{
int a[100],i,n,esum=0,osum=0,ecount=0,ocount=0;
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
if(a[i]%2==0)//even
{
esum+=a[i];
ecount++;
}
else //odd
{
osum+=a[i];
ocount++;
}
}
printf("\nEVEN\nsum: %d\ncount: %d\n",esum,ecount);
printf("\nODD\nsum: %d\ncount: %d",osum,ocount);
return 0;
}
