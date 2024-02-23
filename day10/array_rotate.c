#include<stdio.h>

int main(){
    int n , a[n],k,i,j;
    printf("Enter the size of array :");
    scanf("%d",&n);
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEntered array : ");
    for( i=0;i<n;i++)
        printf("%d " ,a[i]);
    printf("\nEnter value of k :");
    scanf("%d",&k);

    for(i=0;i<k;i++){
        for(j=0;j<n-1;j++){
            a[(j+1)%n]=a[j%n]+a[(j+1)%n]-(a[(j)%n]=a[(j+1)%n]);

        }
    }
    printf("\nAfter Rotation array : ");
    for( i=0;i<n;i++)
        printf("%d " ,a[i]);
    return 1;
}