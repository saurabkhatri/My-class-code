/*Author: Saurab khatri
Faculty: 27(CE/D)
Date: 6/9/2021
1.WAP to find sum of n natural number*/
#include <stdio.h>
int main() {
    int i,n,sum=0;
    printf("enter a value of n:");
    scanf("%d",&n);
   
    i=1;
    while(i<=n)
    {
        sum=sum+i;
   
        i++;
    }
    printf("%d\n",sum);
    
    return 0;
}
