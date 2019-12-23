#include<stdio.h>
#include <stdlib.h>

int main()
{
long int x,y,z;
scanf("%ld %ld %ld",&x,&y,&z);
for(long int i=1;i<=10000000;i++)
{
    if((i<x||i>y)&&(i%z==0))
    {printf("%ld",i);break;
}
}

}
