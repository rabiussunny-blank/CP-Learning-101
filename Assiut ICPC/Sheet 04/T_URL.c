#include<stdio.h>
#include<string.h>

int main()
{
    char S[10000];
    scanf("%s",S);
    int len=strlen(S);
    int start;
    for(int i=0;i<len;i++)
    {
        if(S[i]=='?')
        {
            start=i+1;
            break;
        }
    }
    for(int i=start;i<len;i++)
    {
        if(S[i]=='=')
            printf(": ");
       else if(S[i]=='&')
            printf("\n");
        else
        printf("%c",S[i]);
    }
    printf("\n");
    return 0;
}
