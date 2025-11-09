#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    int remainder;
    int found=0;
    for(int i=A;i<=B;i++)
    {   int x=i;
        int lucky=1;
    while(x>0)
    {
        remainder=x%10;
        if(remainder!=4 && remainder!=7)
        {
            lucky=0;
            break;
        }
        x=x/10;
    }

    if(lucky)
    {
        found++;
        printf("%d ",i);
    }


    }
    if(!found)
    {
        printf("-1");
    }

    return 0;

}
