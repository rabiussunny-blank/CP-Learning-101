#include<stdio.h>
int main()
{
    char X[21],Y[21];
    scanf("%[^\n]\n%[^\n]",X,Y);
    if(strcmp(X,Y)<=0)
    {
        printf("%s\n",X);
    }
    else
        printf("%s\n",Y);

    return 0;
}
