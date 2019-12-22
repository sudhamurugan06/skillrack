#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,i=0,a[10000],b[10000],sum;
while((scanf("%d",&n)==1))
{
    a[++i]=n;
}
for(int j=1;j<=i;j++)
{sum=0;
    sum=a[j]+a[j-1];
    b[++i]=sum;
}
int big=b[0];
for(int j=1;j<=i;j++)
{
    if(big<b[j])
    {
        big=b[j];
    }
}
printf("%d",big);
}
