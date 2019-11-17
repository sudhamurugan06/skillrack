#include<stdio.h>
#include <stdlib.h>

int main()
{
  int x,y,i,j;
  scanf("%d %d",&x,&y);
  for(i=x+1;i<y;i++)
  {
    int f=0;
    for(j=2;j<i/2;j++)
    {
        if(i%j==0)
        {
         f=1;
         break;
        }
    }
    if(f==0)
    {
        printf("NO");
        return 0;
    }
  }
  printf("YES");
        

}
