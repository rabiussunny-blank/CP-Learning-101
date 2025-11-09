#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int fibo,count=0,first=0,second=1;
    while(count<N)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;

    }
    return 0;
}
