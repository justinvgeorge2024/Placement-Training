#include<stdio.h>
void main(){
    int inp,out=1,i=10,n=0;
    printf("Enter a number :");
    scanf("%d",&inp);

    while(inp!=0){
        out=out*10+inp%10;
        inp=inp/10;
        n++;
    }

    while(n>0){
        if(out%10==0){
            printf("1");
        }else if(out%10==1)
            printf("0");
        else
            printf("%d",out%10);
        out=out/10;
        n--;
    }
}