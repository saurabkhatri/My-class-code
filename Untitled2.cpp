/*WAP to implement strlwr*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int l;
	printf("Enter a string :");
	gets(s);
	l=strlwr(s);
	printf("the string becomes");
	return 0;
}
