#include<stdio.h>
#include <stdlib.h>

int main()
{
int x,y,t,c=0,r=0,n;
scanf("%d %d",&x,&y);
for(int i=x;i<=y;i++)
{
    r=0;
    t=i;
    n=0;
   do {
        r=t%10;
    t=t/10;
       n=n*10+r; 
    }while(t>0);
    if(i==n)
    {
        printf("%d ",i);
        c++;
    }
}
if(c==0)
{
    printf("-1");
}
}
