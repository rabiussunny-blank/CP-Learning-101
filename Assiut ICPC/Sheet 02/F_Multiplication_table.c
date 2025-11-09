#include<stdio.h>
int main()
{

   int N;
   scanf("%d",&N);
   int result;
    for(int i=1;i<=12;i++)
    {
       result=N*i;
       printf("%d * %d = %d\n",N,i,result);
    }

    return 0;

}
