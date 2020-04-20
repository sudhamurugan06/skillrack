
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char str[n][1000],temp[1000];
    for(i=0;i<=n-1;i++)
    {
        scanf("%s",str[i]);
       // printf("%s ",str[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
   printf("%s\n%s",str[0],str[n-1]);

}
