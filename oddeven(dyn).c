int* getArrayOfOddOrEven(int N)
{
    int *arr1;
    arr1=(int *)malloc(N*sizeof(int));
    if(N%2==1){
        
    for(i=1,j=0;j<N;i=i+2,j++)
    {
       arr1[j]=i; 
    }
    }
    else
    {
        
        for(i=2,j=0;j<N;i=i+2,j++)
       {
            arr1[j]=i;
        }
    }
    return arr1;

}
