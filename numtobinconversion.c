#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,i=0,count=0;
scanf("%d",&n);
int bn[32];
int m=n;
while(m>0)
{
    bn[i]=m%2;
    m=m/2;
    i++;
}
int v=1;
for(int j=0;j<=i;j++)
{
    if(bn[j]==v)
    {
        count++;
    }
}
printf("%d",count);

}
