#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,m,c;
scanf("%d %d",&n,&m);
char a[n][m][100];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        scanf("%s",&a[i][j]);
    }
}
for(int i=0;i<n;i++)
{
    for(int j=m-1;j>=0;j--)
    {
        int d=strlen(a[i][j]);
        for(int k=d-1;k>=0;k--)
        {
            printf("%c",a[i][j][k]);
        }
        printf(" ");
    }
}
}
********************************************************or*********************************************************************
#include<stdio.h>
#include <stdlib.h>
void reverse(char *word,int len)
{
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",*(word+i));
    }
    printf(" ");
}

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    char mat[r][c][100];
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%s ",mat[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=c-1;j>=0;j--)
        {
            reverse(mat[i][j],strlen(mat[i][j]));
        }
        printf("\n");
    }


}
