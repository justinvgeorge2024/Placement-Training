#include<stdio.h>

//pattern 1,1,2,3,4,9,8,27,16,81,32,243

int main(){
    
    int n, val=1,val1=1,val2=1,i;

    printf("Enter position of value :");
    scanf("%d",&n);

    printf("1 ");
    if(n>1){
        printf("1 ");
        for(i=2;i<n;i++){
            if(i%2==0){
                val1+=val1;
                val=val1;
            }else{
                val2+=val2*2;
                val=val2;
            }
            printf("%d ",val);
        }
    }

    printf("\n\n value = %d",val);

    return 0;
}