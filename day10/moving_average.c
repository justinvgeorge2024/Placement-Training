#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,s,l,i,j,a[n];
    int lar=0;
    float b[n/s];
    printf("\nEnter total number of elements :");
    scanf("%d",&n);
    printf("\nEnter elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter inteval range :");
    scanf("%d",&s);

    if(n%s!=0){
        printf("Cannot divide the distribution equally !!!");
        return -1;
    }
    l=0;
    for(i=0;i<n;i++){
        b[l]=0;
        for(j=0;j<s;j++,i++){
            b[l]+=a[i];    
        }
        i--;
        b[l]/=s;
        l++;
    }

    printf("\nMoving avg of distriution: \n");
    for(i=0;i<l;i++){
        printf("\nSection %d : %f",i,b[i]);
        if(b[lar]<b[i])
            lar=i;
    }

    printf("\n\n Largest value is section : %d , value :%f",lar,b[lar]);



    return 0;
}