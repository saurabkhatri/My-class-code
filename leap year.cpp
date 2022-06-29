/*Author:Saurab khatri
Faculty: 27(CE/D)
Date: 6/24/2021
1.wap to print n natural numbers.
*/
#include<stdio.h>
int main()
{
int i=1,n;
printf("enter the valus of n");
scanf("%d", &n);
do {
	printf("%d",i);
	i++;
	
}
while(i<=n);
return 0;
}
