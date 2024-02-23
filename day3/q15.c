//program to find frequency of each element in a given array

#include<stdio.h>
int main(){
    int a[100],b[10],n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        b[a[i]]++;
    }
    for(int i=0;i<10;i++){
        if(b[i]!=0){
            printf("The occurence of %d is : %d\n",i,b[i]);
        }
    }
    return 0;
}