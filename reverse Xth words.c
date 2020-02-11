#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[1001],temp;
    scanf("%[^\n]s",str);
    int x,count=0,start,end;
    scanf("%d",&x);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ') 
            count++;
        if(count==x-1)
        {
            start=i+1;
            if(i==0&&x==1)
                start=0;
            for(end=start;str[end]!=' '&&str[end+1]!=0;end++);
            while(start<end)
            {
                temp=str[start];
                str[start]=str[end-1];
                str[end-1]=temp;
                end--;
                start++;
                
            }
            count=-1;
        }
    }
    printf("%s",str);

}
************************************************or*************************************************
#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[10000];
    int a,i=0,j=0,c=0,k=0;
    scanf("%[^\n]",&s);
    scanf("%d",&a);
    
    while(j<strlen(s))
    {
        c=0;
       // printf("1. %d %d %d %d\n",i,j,c,k);
      while(c!=a)
      {
          if(isspace(s[j]))
          {
              c++;
          }
          j++;
          if(j>=strlen(s))
          {
              break;
          }
      }
      //printf("2. %d %d %d %d\n",i,j,c,k);
      while(k!=a-1)
      {
          if(isspace(s[i]))
          {
              k++;
          }
          i++;
      }
      k=-1;
     // printf("3. %d %d %d %d\n",i,j,c,k);
      int p=i,q=j-2;
      //printf("4. %d %d\n",p,q);
      while(p<q)
      {
          int t=s[p];
          s[p]=s[q];
          s[q]=t;
          p++;q--;
      }
      
    
    }
printf("%s",s);
}
