#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,r=0,t=0,c=0,c1=0,p=0,v=0;scanf("%d",&n);
    int a[n];for(int i=1;i<=n;i++){scanf("%d",&a[i]);}
    for(int i=1;i<=n;i++)
    {
      r=a[i]%10;
      t=a[i];
      while(t>0){
          t=t/10;
          c++;
      }
      t=a[i];
      while(t>0)
      {
          p=t%10;
          if(p==r){
          c1++;}
          t=t/10;
      }
      if(c==c1){printf("%d ",a[i]);
          v++;
      }
      c=0;c1=0;t=0;r=0;p=0;
    }
    if(v==0)printf("-1");
}
