#include<stdio.h>
int main()
{
    char S[1000000];
    scanf("%[^\n]",S);
     long long sum=0;
    for(int i=0;S[i]!='\0';i++)
    {
        sum=sum+S[i]-'0';
    }
    printf("%lld",sum);

    return 0;
}
