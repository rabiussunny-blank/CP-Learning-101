#include<stdio.h>
int main()
{
    long long  A,B,C;
    scanf("%lld %lld %lld",&A,&B,&C);
    long long x=A,y=B,z=C;
    if(x>y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    if(x>z)
    {
        int temp=x;
        x=z;
        z=temp;
    }
    if(y>z)
    {
        int temp=y;
        y=z;
        z=temp;
    }

    printf("%lld\n%lld\n%lld",x,y,z);
    printf("\n");
    printf("\n");

    printf("%lld\n%lld\n%lld",A,B,C);
    return 0;
}
