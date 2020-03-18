#include <stdio.h>

int main()
{
    int n,m,p,s;scanf("%d %d\n%d %d",&n,&m,&p,&s);
    int t=s,v=s,r=n+m,h=0,l=0;
    for(int i=1;i<=n;i++){
        h=h+p;
    }
    while(t>0){
        if(t%r==0){
            l++;
           h= h*l;
           // printf("%d\n",h);
            s=s-r;
            
        }
        
        t--;
    }
    for(int i=1;i<=s;i++){
        h=h+p;
    }
    printf("%d",h);
}#include <stdio.h>

int main()
{
    int n,m,p,s;scanf("%d %d\n%d %d",&n,&m,&p,&s);
    int t=s,v=s,r=n+m,h=0,l=0;
    for(int i=1;i<=n;i++){
        h=h+p;
    }
    while(t>0){
        if(t%r==0){
            l++;
           h= h*l;
           // printf("%d\n",h);
            s=s-r;
            
        }
        
        t--;
    }
    for(int i=1;i<=s;i++){
        h=h+p;
    }
    printf("%d",h);
}
