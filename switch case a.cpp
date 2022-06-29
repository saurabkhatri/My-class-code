/*SWITCH CASE
1. Write a menu-driven program using Switch case to calculate the following:
a. Area of circle
b. Area of rectangle
c. Perimeter of rectangle
d. Volume of sphere
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main( )
{
char choice,ch;
float radii,length,breadth;
while (1)
{
fflush(stdin);
printf("***********MENU***********");
printf("\na.Area of circle\nb.Area of rectangle\nc.Perimeter of rectangle\nd.Volume of sphere");
scanf("%c",&choice);
switch(choice)
{
case 'a':printf("Enter a radius\n");
scanf("%f",&radii);
printf("Area of circle is %f",(22/7)*pow(radii,2));
break;
case 'b':printf("Enter length and breadth\n");
scanf("%f%f",&length,&breadth);
printf("Area of rectangle is %f",length*breadth);
break;
case 'c':printf("Enter length and breadth\n");
scanf("%f%f",&length,&breadth);
printf("Perimeter of rectangle is %f\n",2*(length+breadth));
break;
case 'd':printf("Enter a radius\n");
scanf("%f",&radii);
printf("Volume of sphereis %f",(4/3)*(22/7)*pow(radii,3));
break;
}
fflush(stdin);
printf("\nDo you wish to continue Press(Y/N)");
scanf("%c",&ch);
}while(ch=='Y'||ch=='y');
return 0;
}
