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
//***************************************************************or***************************************************************
#include<stdio.h>
#include <stdlib.h>

int main()
{  int n,a,c=1;
   scanf("%d\n",&n);
for(int i=0;i<n;i++)
{ int f=0;
  scanf("%d",&a);
  int j=a;
  while(j>=10)
  { int r=j%10;
    j/=10;
    if(r!=j%10)
     { f=1;
       break;
     }
  }
  if(f==0)
  {printf("%d ",a);
   c=0;
  }
}if(c) printf("-1");
}
//***********************************************************or************************************************************
#include<stdio.h>
#include <stdlib.h>
int check(int a)
{
    int b;
    b=a%10;
    while(a>0)
    {
        if(b!=a%10)
        return 0;
        a/=10;
    }
    return 1;
}
int main()
{
    int i,j,k=0,l[1000],n,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(check(a))
        {
        printf("%d ",a);
        k=1;
        }
    }
    if(k==0)
    printf("-1");
