// FIND out the number of repeating numbers (positive abd negative numbers)
//a more optimised version
#include<stdio.h>

void main(){
    int size,count=0;
    int temp;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);

    for(int i=0; i<size;i++)
    {
            for(int j=i+1;j<size;j++)
                if(a[i]==a[j]){
                    count++;
                    temp =a[j];
                    a[j]=a[size-1];
                    a[size-1]=temp;
                    
                    j--;
                    size--; 
                }
            if(count!=0){
                printf("%d->%d\n",a[i],count+1);
                count=0;
            }
        }
}