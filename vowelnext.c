REMOVAL OF CHARACTERS NEXT TO " VOWELS "

#include<stdio.h>
int main()
{
char s[100];
scanf("%s",s);
int len=strlen(s);
for(int i=0;i<len;i++)
{
printf("%c",s[i]);
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
{
i=i+1;
}
}
}
