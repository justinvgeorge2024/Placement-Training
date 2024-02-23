// array sorting

#include<stdio.h>

int main(){

    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);

    int flag;
    for(int i=0;i<size;i++){
        flag =0;
        for(int k=2;k<=a[i]/2;k++){
            if(a[i]%k==0){
                flag =1;
                break;
            }
        }
        if (flag==0 && a[i]!=1){
            printf("%d ",a[i]);
            a[i]=3;
        }
    }
    for(int i=0;i<size;i++){
        if(a[i]%2==0){
            printf("%d ",a[i]);
        }
    }
    for(int i=0;i<size;i++){
        if(a[i]%2!=0 && a[i]!=3){
            printf("%d ",a[i]);
        }
    }

    return 0;
}