#include<stdio.h>
int main()
{
    char F1[101],S1[101];
    char F2[101],S2[101];
    scanf("%s %s",F1,S1);
    scanf("%s %s",F2,S2);
    int d=strcmp(S1,S2);
    if(d==0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    
    return 0;
}
