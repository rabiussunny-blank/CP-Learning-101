#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int row,col;
    for(row=1;row<=N;row++)
    {
        for( col=1;col<=N-row;col++)
        {
            printf(" ");
        }
        for( col=1;col<=2*row-1;col++)
        {
            printf("*",col);
        }
        printf("\n");
    }
    for(row=N;row>=1;row--)
    {
        for(col=1;col<=N-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("*",col);
        }
        printf("\n");
    }

    return 0;
}
