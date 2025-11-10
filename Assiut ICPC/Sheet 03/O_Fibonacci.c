#include<stdio.h>
int main()
{
    long long N;
    long long fibo,count=0,first=0,second=1;
    scanf("%lld",&N);
    while(count<N)
    {
        if(count<=1)
            fibo=count;
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }

        count++;
    }
     printf("%lld",fibo);
    return 0;

}
