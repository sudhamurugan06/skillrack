#include<stdio.h>
#include <stdlib.h>

int main()
{   int n,a[1000],k=0,x=0,i;
    scanf("%d",&n);
    for(k=0;n>0;k++)
    {   a[k]=n%2;
        n/=2;
    }
    for(i=k-1;i>=0;i--)
        x=x*10+a[i];
    for(k=0;x>0;k++)
    {   a[k]=x%2;
        x/=2;
    }
    for(i=k-1;i>=0;i--)
        printf("%d",a[i]);
}
