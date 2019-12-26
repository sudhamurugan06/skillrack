#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int t=0;
char s[4]={'a','b','c','d'};
for(int i=0;i<n;i++)
{
    if(t==n){break;}
    for(int j=0;j<4;j++)
    {
        printf("%c",s[j]);
        t++;
        if(t==n){break;}
        
    }
}

}
************************************or*********************************************************
