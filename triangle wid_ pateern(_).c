if n=5...PATTERN AS BELOW:
______                                                                                                                       
\****/                                                                                                                       
*\**/                                                                                                                        
**\/ 

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,k,a=-1,b;
    scanf("%d",&n);
    k=n+2;
    b=n+1;
    for(i=0;a<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(i==0)
            {
                for(j=0;j<b;j++)
                printf("_");
                break;
            }
            else if(j==a)
            printf("\\");
            else if(j==k-1)
            printf("/");
            else
            printf("*");
        }
        printf("\n");
        k--;
        a++;
    }


}
