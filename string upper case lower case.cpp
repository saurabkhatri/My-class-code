/*WAP to input a string and convert all lower case into upercase letters
and vice versa*/
#include<stdio.h>
int main()
{
char str[100];
int i;
printf("Enter the string:\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='a'&&str[i]<='z')
str[i]=str[i]-32;
else if(str[i]>='A'&&str[i]<='Z')
str[i]=str[i]+32;
}
printf("New string:\n");
puts(str);
return 0;
}
