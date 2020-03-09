#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j,m[55][55],a,b,k,z,sum=0,f=0,big;
    
    scanf("%d\n",&N);
    a = 1;
    b = N;
    if(N%2==0)
        z = N/2;
    else
        z = N/2+1;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            scanf("%d ",&m[i][j]);
        }
        scanf("\n");
    }
    
    for(i=1;i<=z;i++)
    {
        for(j=1;j<=N;j++)
        {
            for(k=1;k<=N;k++)
            {
                if(j==a||k==b||k==a||j==b)
                {
                    sum+=m[j][k];
                    m[j][k] = 0;
                }
            }
        }
        ++a;
        --b;
        if(f==0)
            big = sum;
        else
        {
            if(sum > big)
                big = sum;
        }
        sum=0;
        f = 1;
    }
    printf("%d",big);
}
**************************************************************or****************************************************
#include<stdio.h>
#include <stdlib.h>
#include<limits.h>
int min(int a,int b)
{
    return a<=b?a:b;
}
int main()
{
long int N,K,sum[100]={0},m=INT_MIN;
scanf("%ld",&N);
for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
    {
        scanf("%ld",&K);
        sum[min(min(i,N-i-1),min(j,N-j-1))]+=K;
    }
for(int i=0;i<=N/2;i++)
    if(m<sum[i] && sum[i]!=0)
        m=sum[i];
printf("%ld",m);
}
