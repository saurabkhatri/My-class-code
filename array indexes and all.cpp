/*WAP to check whether given number is present in an array or not if present, find its index */
#include<stdio.h>
int main()
{
int a[100],i,n,num,flag=0,index;
printf("Enter size of array : ");
scanf("%d",&n);

 printf("Enter the elements in array a: \n");//input array a
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe elements in array a are: \n");//display array a
for (i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\nEnter number to check: ");
scanf("%d",&num);

 for (i=0;i<n;i++)//compare num with array elements
{
if(num==a[i])
{
flag=1;
index=i;
break;
}
}
if(flag==1)
{
printf("The %d is present at index a[%d]\n",num,index);
}
else
{
printf("The number is not present\n");
}
return 0;
}
