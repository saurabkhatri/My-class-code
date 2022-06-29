#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter a string :");
	gets(s1);
	strcpy(s2,s1);
	printf("The copied string is:");
	puts(s2);
	return 0;
}
