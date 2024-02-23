//recursive logic to find max. and min value in a given array
#include<stdio.h>
void recursive(int n,int arr[],int max,int min){
    if(n>0){
        printf("Enter the next number:");
        scanf("%d",&arr[n-1]);
        if(max<arr[n-1])
            max=arr[n-1];
        if(min>arr[n-1])
            min=arr[n-1];
        recursive(n-1,arr,max,min);
    }
    else{
        printf("max =%d \nmin =%d",max,min);
    }
}

int main(){
    int arr[50],n;

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    if(n<1)
        printf("Invalid number of elements");
    else{
        printf("enter the number:");
        scanf("%d",&arr[n-1]);
        recursive(n-1,arr,arr[n-1],arr[n-1]);
    }
    return 0;
}