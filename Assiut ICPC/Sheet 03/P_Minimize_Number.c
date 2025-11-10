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
    int min_op=1e9;
    for(int i=0;i<N;i++)
    {
        int count=0;
        while(A[i]%2==0)
             {
                 A[i]=A[i]/2;
                 count++;
             }
           if(count<min_op)
           {
               min_op=count;
           }
    }


        printf("%d",min_op);
        return 0;


}
