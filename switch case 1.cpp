/*SWITCH CASE
1. Write a menu-driven program using Switch case to calculate the following:
1. Addition
2. subtraction
3. multiplication
4. Division
5. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
int choice;
float a,b;
while(1)
{
printf("***********MENU***********");
printf("\n1.Addition\n2.subtraction\n3.multiplication\n4.Division\n5.Exit\n");
printf("Enter your choice. ");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Enter two numbers\n");
scanf("%f%f",&a,&b);
printf("Sum: %f\n",a+b);
break;
case 2:printf("Enter two numbers\n");
scanf("%f%f",&a,&b);
printf("difference: %f\n",a-b);
break;
case 3:printf("Enter two numbers\n");
scanf("%f%f",&a,&b);
printf("Multiplication: %f\n",a*b);
break;
case 4:printf("Enter two numbers\n");
scanf("%f%f",&a,&b);
printf("division: %f\n",a/b);
break;
case 5: exit(0);
default:printf("Enter valid choice\n");
break;
}
}
return 0;
}
