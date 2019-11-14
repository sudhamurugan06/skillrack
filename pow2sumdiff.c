#include<stdio.h>
int main()
{
int n,sum=0,sum1=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if((i!=0)&&!(i&(i-1)))
{

    sum=sum-i;
}
else
{

    sum1=sum1+i;
}
}
printf("%d",sum+sum1);
return 0;
}
