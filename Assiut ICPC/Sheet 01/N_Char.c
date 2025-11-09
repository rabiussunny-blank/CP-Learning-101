#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if(X>=65 && X<=90)
    {
        printf("%c",X+32);
    }
    if(X>=97 && X<=122)
    {
        printf("%c",X-32);
    }

    return 0;

}
