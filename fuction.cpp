/* Function*/
#include<stdio.h>
void add()
{
printf("Enter add function\n");
int a,b,c;
printf("Enter two numbers to add:\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("Sum:%d\n",c);
printf("Exit add function\n");
}
int main()
{
printf("Enter main program\n");
add();
printf("Exit main program\n");
add();
return 0;
}
