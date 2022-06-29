#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter a string :");
	gets(s1);
	printf("Enter a string :");
	gets(s2);
	if(strcmp(s2,s1)==0)
	printf("identical strings");
	else
	printf("non identical strings");
	
	return 0;
}
