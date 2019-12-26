#include<stdio.h>
#include <stdlib.h>

int main()
{
int h,m,x,mm,hh,hm=0;
scanf("%d:%d",&h,&m);
scanf("%d",&x);
    mm=(m+x)%60;
    hh=(m+x)/60;
    hm=(h+hh)%24;
    printf("%02d:%02d",hm,mm);

    

}*******************************************or**********************************
#include<stdio.h>
#include <stdlib.h>

int main()
{int h,m,x;
scanf("%d:%d\n%d",&h,&m,&x);
printf("%02d:%02d",(h+((m+x)/60))%24,(m+x)%60);


}
