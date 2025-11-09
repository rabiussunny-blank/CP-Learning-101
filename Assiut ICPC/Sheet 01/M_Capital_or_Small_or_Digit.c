#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if(X>=48 && X<=57)
    {
        printf("IS DIGIT");
    }
    if(X>=65 && X<=90)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    if(X>=97 && X<=122)
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    return 0;

}
