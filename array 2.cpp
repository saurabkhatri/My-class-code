/*3. WAP to input n numbers in an array and display them in reverse order. */

#include<stdio.h>
int main()
{
int a[100],n,i;
printf("Enter size of array: ");
scanf("%d",&n);
printf("enter elements in array: \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe elements in array are: \n");
for(i=n-1;i>=0;i--)
{
printf("%d\t",a[i]);
}
return 0;
}
