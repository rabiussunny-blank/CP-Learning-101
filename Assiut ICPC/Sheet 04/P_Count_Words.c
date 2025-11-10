#include<stdio.h>
int main()
{
    char S[1000000];
    scanf("%[^\n]",S);
    int count=0;
    int inword=0;
    int len=strlen(S);
    for(int i=0;i<len;i++)
    {
        if(isalpha(S[i]))
        {
            if(!inword)
            {
                count++;
                inword=1;
            }
        }
        else
        inword=0;
    }
    printf("%d",count);
    return 0;
}
