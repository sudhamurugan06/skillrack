int main()
{
 int n,sum=0,small=0,k=0;
scanf("%d\n",&n);
 int a[n],b[n];
for(int i=1;i<=n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=1;i<=n;i++)
{
   if(i%3==0)
   {
       sum=sum+a[i]+a[i-1]+a[i-2];
    b[k++]=sum;
}
sum=0;
}
small=b[0];
for(int i=0;i<k;i++)
{
   //printf("%d  ",b[i]);
   if(small>b[i])
    {
        small=b[i];
    }
}
printf("%d",small);


}
