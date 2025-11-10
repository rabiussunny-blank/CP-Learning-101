#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char S[60],T[60];
        scanf("%s %s",S,T);
        int lenS=strlen(S);
        int lenT=strlen(T);
        int maxlen=(lenS>lenT)?lenS:lenT;
        for(int i=0;i<maxlen;i++)
        {
          if(i<lenS)
            printf("%c",S[i]);
          if(i<lenT)
            printf("%c",T[i]);
        }
        printf("\n");
    }
    return 0;
}
