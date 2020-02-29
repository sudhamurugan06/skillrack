ALPHABETS & INTEGERS ALTERNATE COLUMS: if N=7

    1
    2 a
    3 b 1
    4 c 2 a
    5 d 3
    6 e
    7  
********************************************************************************************


      logic: if j column is even print alphabets and -2.
             else print Nos and decrement by 2;
*******************************************************************************************
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        if(j%2==0){
            printf("%d ",i+1-j);
        }
        else{
            char d;
            d='a'+i-j;
            if(d>122){
                d=d-122+97;
            }
            printf("%c ",'a'+(i-j)%26);
        }
        if(i<=a/2){
            if(i==j){
                break;
            }
        }
        else{
            if(i+j==a-1){
                break;
            }
        }
    }
    printf("\n");
}
}
