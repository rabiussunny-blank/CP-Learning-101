#include<stdio.h>
int main()
{
    float N;
    scanf("%f",&N);
    int intPart=(int)N;
    float decimalPart=N-intPart;
    if(decimalPart==0)
    {
        printf("int %d",intPart);
    }
    else
    {
        printf("float %d %.3f",intPart,decimalPart);
    }
    return 0;

}
