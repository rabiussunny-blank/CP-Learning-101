#include<stdio.h>
int main()
{
    long long A,B;
    char S;
    scanf("%lld %c %lld",&A,&S,&B);
    if(S=='+')
    {
        printf("%lld\n",A+B);
    }
    else if(S=='-')
    {
        printf("%lld\n",A-B);
    }
    else if(S=='*')
    {
        printf("%lld\n",A*B);
    }
    else
    {
        printf("%lld",A/B);
    }

    return 0;
}
