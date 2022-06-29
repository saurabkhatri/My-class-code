#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int l;
	printf("Enter a string :");
	gets(s);
	l=strlen(s);
	printf("string length: %d",l);
	return 0;
}
