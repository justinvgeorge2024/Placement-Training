#include<stdio.h>

// find 15th term in series
// 0,0,7,6,14,12,21,18,28

int main(){
    int k=1,val=0,val1=0,val2=0;
    int n;
    printf("enter position of values to be found :");
    scanf("%d",&n);
    printf(" 0");
    if(n>=2){
        printf(" 0");
        for(k=3;k<=n;k++){
            if(k%2!=0){
                val1+=7;
                val=val1;
            }
            else{
                val2+=6;
                val=val2;
            }
            printf(" %d",val);
            
            
        }
    }
    printf("\n\n value = %d",val);
}