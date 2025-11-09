#include<stdio.h>
int main()
{
    long long N;
    scanf("%lld",&N);
    long long year=N/365;
    long long month=(N%365)/30;
    long long days=(N%365)%30;

    printf("%lld years\n%lld months\n%lld days",year,month,days);
    return 0;

}
