#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,sum=0,h=0,r=0,c=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){

    scanf("%d",&a[i]);
}
for(int j=0;j<n;j++)
{
         h=a[j];
        while(h!=0)
        {
             r=h%10;
            h=h/10;
            sum=sum+r;
        }
        if(a[j]%sum==0)
        {
            c++;
            printf("%d ",a[j]);
        }
        sum=0,h=0;
    }
    if(c==0)
    {
        printf("-1");
    }
}
