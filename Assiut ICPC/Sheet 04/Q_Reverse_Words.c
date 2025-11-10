#include<stdio.h>
int main()
{
    char S[1000000];
    scanf("%[^\n]",S);
    int len=strlen(S);
    int start=0;
    for(int i=0;i<=len;i++)
    {
        if(S[i]==' ' || S[i]=='\0')
        {
            for(int j=i-1;j>=start;j--)
            {
                putchar(S[j]);
            }
            if(S[i]==' ')putchar(' ');

            start=i+1;
        }
    }

    return 0;
}
