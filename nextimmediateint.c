#include<stdio.h>
#include <stdlib.h>

int main()
{
   int n,i=0,j=0,d[10]={0},k;
   scanf("%d",&n);
   int x=n;
   while(x)
   {
       d[x%10]++;
       x=x/10;
   }
   while(j<=100000)
   {
       k=n+1;
       int c[10]={0};
       int f=0;
       while(k)
       {
           c[k%10]++;
           k=k/10;
       }
       for(i=0;i<10;i++)
       {
           if(c[i]!=d[i])
           {
               f=1;
               break;
           }
           
       }
       if(f==0)
       {
           printf("%d",n+1);
           exit(0);
       }
       n++;
       j++;
   }
   printf("-1");

}
**************************************************or*************************************************************
