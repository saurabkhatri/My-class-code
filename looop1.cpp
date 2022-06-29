#include <stdio.h>
int main()
{
for(int i=1;i<=5;i++) //for rows
{
for(int j=1;j<=9;j++) //for column
{
if(j>=6-i&&j<=4+i) //condition which varies according to question
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
