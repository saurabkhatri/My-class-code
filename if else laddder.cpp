/*Author: Saurab khatri
Faculty: 27(CE/D)
Date: 6/9/2021
2. program to find maximum of 3 numbers using else if ladder
*/

#include<stdio.h>
int main()
{
int a, b, c, d;
printf("Enter values of 4 numbers: ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%D",&d);
if(a>b && a>c && a>d)
{
printf("%d is largest",a);
}
else if(b>c && b>d)
{
printf("%d is largest",b);
}
else if(c>d)
{
printf("%d is largest",c);
}
else
{
printf("%d is largest", d);
}
return 0;
}
