/*4. WAP to input n numbers in an array and find sum and average of elements. */

#include<stdio.h>
int main()
{
int a[100],n,i,sum=0;
float avg;
printf("Enter size of array: ");
scanf("%d",&n);
printf("enter elements in array: \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe elements in array are: \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
for(i=0;i<n;i++)
{
sum+=a[i];
}
avg=(float)sum/n;
printf("\nsum: %d\navg: %f",sum,avg);
return 0;
}
