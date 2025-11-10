#include<stdio.h>
int main()
{
    char S[10000];
    scanf("%s",S);
    char target[]="hello";
    int j=0;
    for(int i=0;S[i]!='\0';i++)
    {
        if(S[i]==target[j])
            j++;
        if(j==5)
            break;
    }
    if(j==5)
        printf("YES");
    else
        printf("NO");

    return 0;
}
