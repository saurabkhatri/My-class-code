/*SWITCH CASE
1. Write a menu-driven program using Switch case to print following output:
G,g: Green
B,b: Blue
R,r: Red
E,e: Exit
otherwise:Black
*/
#include<stdio.h>//printf, scanf
#include<stdlib.h> //exit(0)
int main( )
{
char choice,ch;
float a,b;
do
{
fflush(stdin);
printf("***********MENU***********");
printf("\nG,g: Green\nB,b: Blue\nR,r: Red\nE,e: Exit\notherwise:Black\n");
printf("Enter your choice. ");
scanf("%c",&choice);
switch(choice)
{
case 'G':
case 'g':printf("Green\n");
break;
case 'B':
case 'b':printf("Blue\n");
break;
case 'R':
case 'r':printf("Red\n");
break;
case 'E':
case 'e':exit(0);
break;
default:printf("Black\n");
break;
}
fflush(stdin);
printf("\nDo you wish to continue Press(Y/N)");
scanf("%c",&ch);
}while(ch=='Y'||ch=='y');
return 0;
}
