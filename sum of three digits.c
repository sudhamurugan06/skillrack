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
