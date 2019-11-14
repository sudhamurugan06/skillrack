#include<stdio.h>
#include <stdlib.h>

int main()
{
char arr[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
int l=0;
char str[1000];
while(scanf("%s ",str)>0)
{
    for(int i=0;i<10;i++)
    {
        if(strcmp(str,arr[i])==0)
        {
            printf("%d",i);
        }
    }
}


}
