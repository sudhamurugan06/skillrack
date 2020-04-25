#include<string.h>
int main() 
    {
char s[100],a[100];int l=0;
scanf("%[^\n]s",s);
l=strlen(s);
//printf("%s",s);

for(int i=0;i<l;i++){
    int c=0,p=0,t=0;
    if(s[i]=='_'){
        c=i;//printf("%d",i);
       for(int j=c+1;j<l;j++){
        if(s[j]=='_'){
            t=1;
            p=j;break;
        }
        }
        if(t==1){int o=0;
        for(int j=p-1;j>c;j--){
             a[o++]=s[j];
        }o=0;
        for(int k=c+1;k<p;k++){
            s[k]=a[o++];
        }}
      
}


}
printf("%s%d",s,strlen(s));

}
