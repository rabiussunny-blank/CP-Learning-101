#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int remainder,sum=0;
    int temp=N;
    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum*10+remainder;
        temp=temp/10;
    }
    if(N==sum)
    {
        printf("%d\n",sum);
        printf("YES");
    }
    else
    {   printf("%d\n",sum);
        printf("NO");
    }
    return 0;
}
