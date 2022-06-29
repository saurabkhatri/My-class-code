/*WAP to implement strlwr()*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("Enter a string :");
	gets(s);
	strlwr(s);
	printf("The lower string is:");
	puts(s);
	return 0;
}
