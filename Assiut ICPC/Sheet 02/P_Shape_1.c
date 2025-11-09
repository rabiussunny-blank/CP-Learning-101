#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int row,col;
    for(row=N;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("*",col);
        }
        printf("\n");
    }
    return 0;

}
