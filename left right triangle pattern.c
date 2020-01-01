#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,m,n,len;
    char a[1000];
    scanf("%s",a);
    int s=0,e=strlen(a)-1;
    if(strlen(a)%2==0)
    len=strlen(a)-1;
    else
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        for(j=0;j<strlen(a);j++)
        {
            if(j<s || j>e)
            printf("*");
            else
            printf("%c",a[j]);
        }
        if(i<len/2)
        {
            s++;
            e--;
        }
        else
        {
            s--;
            e++;
        }printf("\n");
    }
    


}
