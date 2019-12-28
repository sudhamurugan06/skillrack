#include<stdio.h>
#include <stdlib.h>

int main()
{
 long long  int n;
  scanf("%lld",&n);
  int sum=0;
  while(n!=0)
  {
      int p=n%1000;
      sum=sum+p;
      n=n/1000;
  }
  printf("%d",sum);

}
********************************************************or************************************************
#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,sum=0; scanf("%d",&n);
while(n!=0){
    sum+=n%1000;
    n/=1000;
}
printf("%d",sum);
}
**************************or***********************************************************************************************
int main()
{
    long int n;
    int i=0,j,h=0,sum=0,k;
    scanf("%ld",&n);
    long int num=n;
    while(n>0)
    {
        n=n/10;
        i++;
    }
    if(i==3)
    {
        printf("%d",num);
    }
    else if(i==6)
    {
        int s[6];
        for(j=0;j<6;j++)
        {
            s[j]=num%10;
            num=num/10;
        }
        int a[3];
        for(j=0;j<6;j=j+3)
        {
          a[h]=s[j]+s[j+1]*10+s[j+2]*100;
          h++;

        }
        printf("%d",a[0]+a[1]);
    }
    else if(i==9)
    {
        int s[9];
        for(j=0;j<9;j++)
        {
            s[j]=num%10;
            num=num/10;
        }
        int a[3];
        for(j=0;j<9;j=j+3)
        {
          a[h]=s[j]+s[j+1]*10+s[j+2]*100;
          h++;

        }
        printf("%d",a[0]+a[1]+a[2]);
    }
}
