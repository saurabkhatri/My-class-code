/*NAME:SUSHIL BARAL
  ROLL:34(CE/DAY)
 WAP TO INPUT MARKS OF FIVE SUBJECTS ANF FIND THE FOLLOWNG
 a)percentage>=80(distinction)
 b)59-79(first division)
 c)40-59(second division)*/
#include <stdio.h>
int main() {
    float s1,s2,s3,s4,s5,t,p;
    printf("Enter the marks obtained:");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    t=s1+s2+s3+s4+s5;
    p=(t/500)*100;
    if (s1>=40 && s2>=40 && s3>=40 && s4>=40 && s5>=40)
    {
        if (p>=80)
        printf("distinction");
        else if (p>59 && p<=79)
        printf("First division");
        else if(p>=40 && p<=59)
        printf("Second division");
    }
    else
    {
        printf("Third division");
    }
    return 0;
}
