#include<stdio.h>
int main()
 {
     int x;
     scanf("%d",&x);
     int count=0;
     for(int i=1;i<=x;i++)
     {
         if(x%i==0)
         {
             count++;
         }
     }
     if(count==2)
     {
         printf("YES");
     }
     else
     {
         printf("NO");
     }
     return 0;
 }
