/*WAP to find if given number is palindrome or not using function*/
#include<stdio.h>
void palindrome(int);
int main()
{
int num;
printf("Enter number:");
scanf("%d",&num);
palindrome(num);
return 0;
}
void palindrome(int n)
{
int rem,r=0,og;
og=n;
while(n>0)
{
rem=n%10;
r=r*10+rem;
n=n/10;
}
if(og==r)
printf("palindrome");
else
printf("Not palindrome");
}
