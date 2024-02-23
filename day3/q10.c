//mixed sort

#include<stdio.h>

void printOrder(int arr[],int n){
    sort(arr,n);    //normal sorting function--- implement  as required...
    for(int i=0;i<n/2;i++)
        printf("%d",arr[i]);
    for(int j=n-1; j>=n/2;j++)
        printf("%d",arr[j]);
     
}


//include main function as required.