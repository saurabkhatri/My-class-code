/* ARRAY
1. WAP to input 5 numbers in an array and display them.
Implement compile time and run time initialization*/

#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};//compile time
int b[5],i;
printf("enter elements in array b: \n");
for(i=0;i<5;i++)//run time initialization
{
scanf("%d",&b[i]);
}
printf("\nThe elements in array a are: \n");
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
}
printf("\nThe elements in array b are: \n");
for(i=0;i<5;i++)
{
printf("%d\t",b[i]);
}
return 0;
}
