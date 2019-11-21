#include<stdio.h>
int main()
{
char s[1000];
scanf("%s",s);
int len=strlen(s);
int n=0,c=0,c1=0,c2=0;
if(s[n]<96)
{
for(int i=1;i<=len;i++)
{
if(s[i]<96){c++;}
if(s[i]>96){c1++;}
}
}
if(s[n]>96)
{
for(int i=0;i<=len;i++)
{
if(s[i]>96){c2++;}
}
}if((c==len)||(c1==len-1)||(c2==len))
{
printf("VALID");
}
else
{
printf("INVALID");
}
}
//or*******************************************************************************************************************
#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[1000];
scanf("%s",s);
int i,l,j=0,k=0;
l=strlen(s);
for(i=0;i<l;i++)
{
    if(isupper(s[i]))
    j++;
    else if(islower(s[i]))
    k++;
}
if(j==l||k==l)printf("VALID");
else if(j==1&&k==l-1)printf("VALID");
else
printf("INVALID");
}
