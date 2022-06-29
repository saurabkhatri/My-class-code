/* WAP to concatenate 2 string */
#include<stdio.h>
int main()
{
int i,j;
char str1[50],str2[50],str3[50];
printf("Enter the 1st string:");
gets(str1);
printf("Enter 2nd string:");
gets(str2);
// copy str1 to str3
for( i=0;str1[i]!='\0';i++)
{
str3[i]=str1[i];
}
//copy str2 to str3
for(j=0;str2[j]!='\0';j++)
{
str3[i+j]=str2[j];
}
str3[i+j]='\0';
printf("Concatenated string: \n");
puts(str3);
return 0;
}
