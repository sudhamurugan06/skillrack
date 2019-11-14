#include<stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,d,g;
scanf("%d",&a);g=a;
for(b=0;b<a;b++){
    for(c=0,d=1;c<=b;c++){
        printf("%d ",d);
        if(c<(g-1)/2)
        d++;
    }
   // if(b>=a/2)g-=2;
    printf("\n");
}

}
