#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,c=0,r=1;
    scanf("%d",&n);
    for(int i=0 ;i<=n/2;i++)
    {
        r=2*r;
        c++;
        if(r==n)
        {
           for(int j=0;j<c-1;j++)
           {
               printf("2*");
           }
           break;
        }

    }
    printf("2");

}
//or**********************************************************************************************************************
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d ",&a);
    int i = 1;
    while(((int )pow(2,i)) != a) {
        printf("2*");
        i++;
    }
    printf("2");

}
