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
//**************************************************************************************
//or
#include<stdio.h>
int main()
{
int n,sum=0,sum1=0;#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
long n,i,c=0,k=0,sum=0,sum1=0;
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
    if(i==pow(2,c))
    {
        k=-i;
        sum+=k;
        c++;
    }
    else
    {
        sum1+=i;
    }
}
printf("%ld",sum+sum1);
}
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
//*****************************************************************************************
//or
