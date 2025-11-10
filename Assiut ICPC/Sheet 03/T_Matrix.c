#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N][N];
    int sum1=0,sum2=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }


    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i==j)
            {
                sum1=sum1+A[i][j];
            }
        }
    }


    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i+j==N-1)
            {
                sum2=sum2+A[i][j];
            }
        }
    }

    printf("%d",abs(sum1-sum2));
    return 0;

}
