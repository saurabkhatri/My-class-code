/*WAP to implement strupr()*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("Enter a string :");
	gets(s);
	strupr(s);
	printf("The upper string is:");
	puts(s);
	return 0;
}
