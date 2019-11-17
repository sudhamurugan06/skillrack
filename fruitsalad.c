#include<stdio.h>
#include <stdlib.h>

int main()
{
int x,y,z,c=0;
scanf("%d %d %d",&x,&y,&z);
for(int n=1;n<=x;n++)
{
        if(x>=n;y>=2*n;z>=4*n)
        {
            c++;
        }
    }
    if(c>0){printf("%d",c);}
else
{
    printf("0");
}

}

//or******************************************************************
#include<stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,d=0;
scanf("%d %d %d",&a,&b,&c);
while(a>0 && b>1 && c>3){
    a-=1;
    b-=2;
    c-=4;
    d++;
} 
printf("%d",d);
}
