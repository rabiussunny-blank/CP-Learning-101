#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    char S[N];
    scanf("%s",S);
    int count=0;
    for(int i=0;i<N;i++)
    {
        if(S[i]==S[i+1])
        count++;
    }
    printf("%d",N-count);
    return 0;
}
