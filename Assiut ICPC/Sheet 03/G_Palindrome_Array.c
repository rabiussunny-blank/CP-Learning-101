#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    int palindrome=1;
    for(int i=0;i<N;i++)
    {
        if(A[i]!=A[N-i-1])
        {
            palindrome=0;
            break;
        }
    }

    if(palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
