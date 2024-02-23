//deleting a specific element in an array
#include<stdio.h>

#define max 100

int main(){
    int a[max],n,p;
    printf("Enter the number of elements in an array :");
    scanf("%d",&n);
    printf("Enter the elements in the array :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position of element to be deleted from the array :");
    scanf("%d",&p);

    if(p>=0 && p<n){
        for(int i=p;i<n;i++){
            a[i]=a[i+1];
        }
        n--;
        printf("After deletion; elements in the array :");
        for(int i=0;i<n;i++){
            printf(" %d ",a[i]);
        }
    }
    else{
        printf("Invalid input");
    }

    return 0;
}