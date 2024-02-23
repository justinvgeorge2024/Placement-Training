//write the program to inserting a particular element in a linear array

#include<stdio.h>

#define max 100

int main(){
    int a[max],n, e,p;
    printf("Enter the number of elements in an array :");
    scanf("%d",&n);
    printf("Enter the elements in the array :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the new element to be added in the array :");
    scanf("%d",&e);
    printf("Enter the position(starting from 0 to %d) of that element in the array :",n-1);
    scanf("%d",&p);

    if(p>=0 && p<n){
        for(int i=n;i>=p;i--){
            a[i]=a[i-1];
        }
        n++;
        a[p]=e;
        printf("After insertion; elements in the array :");
        for(int i=0;i<n;i++){
            printf(" %d ",a[i]);
        }
    }
    else{
        printf("Invalid input");
    }

    return 0;
}