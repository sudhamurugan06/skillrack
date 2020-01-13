***************************************question:  1
                                                  2 5
                                                  3 4 1
                                                  4 3 2 5
                                                  5 2 3 4 1   ***************************************************************************

#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;scanf("%d",&n);
int p=n,s=1,v=n;
printf("1\n");
for(int i=2;i<=n;i++)
{
    s=i;
    p=v;
        for(int j=1;j<=i;j++)
        {
            if(j%2==1){
                printf("%d ",s);
                s=s-2;
            }
            if(j%2==0){printf("%d ",p);
            p=p+2;
        }
    }
    v--;
    printf("\n");
}
}
************************or**************************
#include<stdio.h>
#include <stdlib.h>

int main()
{
int a;
scanf("%d",&a);
int b[a],c[a];
for(int i=1;i<=a;i++)
{
    b[i]=a,c[i]=1;
    for(int j=1;j<=i;j++)
    {
        if(j%2!=0)
        {
        printf("%d ",c[j]++);
        }
        else 
        {
        printf("%d ",b[j]--);
        }
    }
    printf("\n");
}
}
