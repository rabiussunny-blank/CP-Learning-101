#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    int n1,n2,remainder,gcd;
    n1=A;
    n2=B;
    while(n2!=0)
    {
        remainder=n1%n2;
        n1=n2;
        n2=remainder;
    }
    gcd=n1;
    printf("%d",gcd);
    return 0;

}
