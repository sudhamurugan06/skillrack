#include<stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 scanf("%d",&n);
 char a[n];
 for(int i=0;i<n;i++)
 {
     scanf(" %c",&a[i]);
 }
 for(int i=n-1;i>=0;i--)
 {
     a[i]=toupper(a[i]);
     printf("%d ",a[i]-64);
 }
}
