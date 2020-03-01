{
    int n,i,j,k=0,factors[1000],count=0,m,l=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            factors[count++]=i;
        }
    }
    m=(2*count)-1;
    int a[1001][1001];
    for(i=l;i<=m;i++)
    {
        for(j=i;j<=m;j++)
        {
            a[i][j]=factors[k];
            a[m][j]=factors[k];
            a[j][m]=factors[k];
            a[j][i]=factors[k];
        }
        m=m-1;
        l=l+1;
        k=k+1;
    }
    for(i=1;i<=(2*count)-1;i++)
    {
        for(j=1;j<=(2*count)-1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


}#include<stdio.h>
#include <stdlib.h>

int main()
{
int N;
scanf("%d",&N);
int *arr=malloc(sizeof(int)*N);
int k=0;
for(int index=1;index<=N;index++)
{
    if(N%index==0)
    {
        arr[k++]=index;
    }
}
int size=(k*2)-1;
int mat[size+1][size+1];
int startR=1,startC=1,endR=size,endC=size,ctr=0;
for(int index1=1;index1<=k;index1++)
{
    for(int col1=startC;col1<=endC;col1++)
    {
        mat[startR][col1]=mat[endR][col1]=arr[ctr];
    }
    for(int row1=startR;row1<=endR;row1++)
    {
        mat[row1][startC]=mat[row1][endC]=arr[ctr];
    }
    startR++;
    startC++;
    endR--;
    endC--;
    ctr++;
}
for(int row=1;row<=size;row++)
{
    for(int col=1;col<=size;col++)
    {
        printf("%d ",mat[row][col]);
    }
    printf("\n");
}
}
