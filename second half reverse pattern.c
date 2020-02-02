#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,c=1;
scanf("%d",&n);
int m=(n/2)+1,v=n,k=1,t=n;
for(int i=1;i<=n/2;i++)
{
    for(int b=1;b<i;b++)
    {
        printf("* ");
    }
    for(int j=k;j<=n-i+1;j++)
    {
        if(j>=m)
        {
            printf("%d ",v);
            v--;
        }
        else
        {
            printf("%d ",c);
            c++;
        }
    }
    v=t-2;
    t=t-2;
    c=1;
    printf("\n");
    k++;

}

}
