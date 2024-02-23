// number based arrays
// cognizant prev. question

// i/p:
// 10
// 1 6 8 2 4 6 2 523 6 7

// o/p:
// 6 -> 3
// 2 -> 2

// FIND out the number of positive repeating numbers

#include<stdio.h>

void main(){

    int size;
    scanf("%d",&size);
    int a[size], count[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
        count[i]=0;
    }

    // selection sort
    for(int i=0; i<size;i++)
    {   if(a[i]>=0)
        for(int j=i+1;j<size;j++)
            if(a[i]==a[j]){
                count[i]++;
                a[j]=-1; ///// important - changing to -1 ,so same value dosent get printed / calculated multiple twice
            }
        
    }

    for(int i=0;i<size;i++){
        if(count[i]!=0){
            printf("%d->%d\n",a[i],count[i]+1);
        }
    }

}