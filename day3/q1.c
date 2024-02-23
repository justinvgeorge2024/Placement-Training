//program to seperate & count +ve,-ve,0's in given array.

#include<stdio.h>
#define max 100

void separate(int [],int);
void main(){
    int a[max],i,n;
    printf("Enter the limit of array :");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        printf("\nInput %d no :",i+1);
        scanf("%d",&a[i]);
    }
    separate(a,n);
}

void separate(int a[max],int l){
    
    int p[max],x=-1,n[max],y=-1,z[max],w=-1,i=0;
    for(i=0;i<l;i++){
        if(a[i]>0){
            x++;
            p[x]=a[i];
        }
        else{
            if(a[i]<0){
                y++;
                n[y]=a[i];
            }
            else{
                w++;
                z[w]=a[i];
            }
        }
    }

    printf("\n\nNumber of positive numbers = %d",x+1);
    if(x>=0){
        printf("\nThey are:  ");
        for(i=0;i<=x;i++)
            printf(" %d ",p[i]);
    }
    printf("\n\nNumber of Negative numbers = %d",y+1);
    if(y>=0){
        printf("\nThey are:  ");
        for(i=0;i<=y;i++)
            printf(" %d ",n[i]);
    }
    printf("\n\nNumber of zeroes = %d",w+1);
}