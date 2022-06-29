/* WAP to check if the given string is palindrome or not*/
#include<stdio.h>
#include<string.h>
int main()
{
char str1[100], str2[100];
printf("Enter a string:");
gets(str1);
strupr(str1);
strcpy(str2,str1);
strrev(str2);
if(strcmp(str1,str2)==0)
printf("Palindrome strings");
else
printf("Not a Palindrome strings");
return 0;
}
