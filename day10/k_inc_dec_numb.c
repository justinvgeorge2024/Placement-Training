// k=3
// 22 29 32 28 21 10
// first 3 inc - last 3 dec
// sort this

#include<stdio.h>

int main(){
    int k,i,j,l, a[2*k],b[2*k];
    scanf("%d",&k);
    for(i=0;i<2*k;i++){
        scanf("%d",&a[i]);
    }

    for(i=0,j=2*k-1,l=0;(i<k || j>k+1)&&l<2*k;l++){
        if(a[i]<a[j]){
            b[l]=a[i];
            i++;
        }
        else{
            b[l]=a[j];
            j--;
        }
    }
    printf("l=%d\n",l);
    for(i=0;i<l;i++)
        printf("%d ",b[i]);
    return 0;
}