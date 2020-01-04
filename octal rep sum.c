#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;scanf("%d",&n); int p=n,a[100],sum=0;
for(int i=0;p>0;i++)
{
    a[i]=p%8;
    sum=sum+a[i];
    p=p/8;
}
printf("%d",sum);

}
