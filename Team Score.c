#include<stdio.h>
#include <stdlib.h>

int main()
{
int a[100],i=0,count=0,count1=0,n;
while(scanf("%d",&n)==1)
{
    a[++i]=n;
}
int k=i/2+1;
for(int j=1;j<=i/2;j++)
{
   // printf("%d ",a[j]);
    if(a[j]==a[k])
    {
        count=count+1;
        count1++;
    }
     if(a[j]>a[k])
     {
         count=count+3;
     }
     if(a[j]<a[k]){
         count1=count1+3;
     }
     k++;
}
printf("%d %d",count,count1);

}
