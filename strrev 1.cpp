#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("Enter a string :");
	gets(s);
	strrev(s);
	printf("The reversed string is:");
	puts(s);
	return 0;
}
