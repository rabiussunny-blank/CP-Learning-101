#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);

    }
    int maxindex=0;
    int minindex=0;
    for(int i=0;i<N;i++)
    {
        if(A[i]<A[minindex])
        {
            minindex=i;
        }
        if(A[i]>A[maxindex])
        {
            maxindex=i;
        }
    }
    int temp;
    temp=A[minindex];
    A[minindex]=A[maxindex];
    A[maxindex]=temp;

    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;


}
