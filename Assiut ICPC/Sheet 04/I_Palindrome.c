#include<stdio.h>
int main()
{
    char S[1000];
    scanf("%s",S);
    int len=strlen(S);
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(S[i]==S[len-1-i])
        {
            flag++;
        }
        else
        {
            flag=0;
            break;
        }

    }
    if(flag>0)
        printf("YES");
    else
        printf("NO");
   return 0;
}
