#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    long long A[N];

    for(int i=0;i<N;i++)
    {
        scanf("%lld",&A[i]);
    }

    long long X;
    scanf("%lld",&X);
    int pos=-1;

    for(int i=0;i<N;i++)
    {
        if(A[i]==X)
        {
            pos=i;
            break;
        }

    }
    printf("%d",pos);
    return 0;

}
