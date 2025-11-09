#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int even=0,odd=0,positive=0,negative=0;
    int x;
    while(N--)
    {  scanf("%d",&x);
        even=even+(x%2==0);
        odd=odd+(x%2!=0);
        positive=positive+(x>0);
        negative=negative+(x<0);
    }

    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);
    return 0;
}
