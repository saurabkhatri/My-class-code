/* WAP to print following pattern
*
**
***
****
*****

*/

#include <stdio.h>
int main()
{
for(int i=1;i<=5;i++) //for rows
{
for(int j=1;j<=5;j++) //for column
{
if(j<=i) //condition which varies according to question
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
