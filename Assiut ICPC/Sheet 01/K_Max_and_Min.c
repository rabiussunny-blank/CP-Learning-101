#include<stdio.h>
int main()
{
    long long A,B,C;
    scanf("%lld %lld %lld",&A,&B,&C);

    int min=A,max=A;
    if(B<min)
    {
        min=B;
    }
    if(C<min)
    {
        min=C;
    }
    if(B>max)
    {
        max=B;
    }
    if(C>max)
    {
        max=C;
    }
    
    printf("%d %d",min,max);
    
    return 0;
  
}