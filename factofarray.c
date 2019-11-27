#include<stdio.h>
#include <stdlib.h>

int main()
{
long int a,big=0,small=20;
while(scanf(" %ld",&a)==1){

    if(big<a)
    {
        big=a;
    }
    if(small>a){small=a;}
}

printf("%ld",small*big);
}
