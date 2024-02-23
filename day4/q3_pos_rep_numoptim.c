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
    int size,count=0;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);

    for(int i=0; i<size;i++)
       if(a[i]>=0){
            for(int j=i+1;j<size;j++)
                if(a[i]==a[j]){
                    count++;
                    a[j]=-1; ///// important - changing to -1 ,so same value dosent get printed / calculated multiple twice
                }
            if(count!=0){
                printf("%d->%d\n",a[i],count+1);
                count=0;
            }
        }
}