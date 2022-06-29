/*Author:Saurab khatri
Roll no:27(CE/D)
Date:5/26/2021
1.Write a program to check if the user is eligilble to vote.
(Hint= age= >18
Step 1: start
step2: declare age a
step3: input a from user
step4: check if n>18?
    if true,print user is eligible to vote
	if false, stop.
	step5: stop*/

#include<stdio.h>

int main ()
{
	int a;
    printf("enter the age to be checked");
    scanf("%d",&a);
    if(a>18)
    {
    	printf("user is eligible to vote.\n");
	}
    return 0;

}
