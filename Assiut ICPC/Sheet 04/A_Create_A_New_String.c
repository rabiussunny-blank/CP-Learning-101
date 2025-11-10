#include<stdio.h>
int main()
{
    char S[1000];
    char T[1000];
    gets(S);
    gets(T);
    printf("%d %d\n",strlen(S),strlen(T));
    printf("%s %s\n",S,T);
    return 0;
}
