#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	int i;
	printf("Enter the string:\n");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	
	}
	printf("copied string is :\n");
	puts(str2);
	return 0;
	
}

