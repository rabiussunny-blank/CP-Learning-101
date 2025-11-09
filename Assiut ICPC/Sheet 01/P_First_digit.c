#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int d=X/1000;
    if(d%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
