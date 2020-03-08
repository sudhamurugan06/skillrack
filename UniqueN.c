
#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d ",&n);
if(n==1){
printf("10");
exit(0);}
else
printf("%d ",9*fact(9)/fact(10-n));

}
fact(int n){
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
