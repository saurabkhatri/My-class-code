/* WAP to input n names and sort them*/
#include<stdio.h>
#include<string.h>
int main()
{
char str[50][50], temp[50];
int i,j,n;
printf("Enter number of names:");
scanf("%d",&n);
printf("Enter names\n");
fflush(stdin);
//input names
for(i=0;i<n;i++)
{
gets(str[i]);
}
printf("Names are\n");
//display names
for(i=0;i<n;i++)
{
puts(str[i]);
}
//sorting names
for(i=0;i<n-1;i++)// for passes
{
for(j=0;j<n-1-i;j++)// to compare adjacent elements
{
if(strcmp(str[j],str[j+1])>0)
{
strcpy(temp,str[j]);
strcpy(str[j],str[j+1]);
strcpy(str[j+1],temp);
}
}
}
//displaying sorted names
printf("Sorted names:\n");
for(i=0;i<n;i++)
{
puts(str[i]);
}
return 0;
}
