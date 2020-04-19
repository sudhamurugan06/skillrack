#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000][1000];
    int i=0,j,l,k;
while(scanf("%s ",s[i])>0)
{
    i++;
}

for(j=0;j<i;j++)
{
    l=strlen(s[j]);
    for(k=l-1;k>=0;k--)
    {
        printf("%c",s[j][k]);
    }
    printf(" ");
}

}
