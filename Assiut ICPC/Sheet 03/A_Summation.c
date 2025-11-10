#include<stdio.h>
int main()
{
     int  N;
    scanf("%d",&N);
   long long A[N];
    long long sum=0;
    for(int i=0;i<N;i++)
    {
        scanf("%lld",&A[i]);
    }

    for(int i=0;i<N;i++)
    {
        sum=sum+A[i];
    }
    printf("%lld",llabs(sum));
    return 0;
}
