//number based questions
#include<stdio.h>

//Abandoned City - Number based problem
//collect the max. gold coins by enter the min. number of consecutive houses 

// //I/O: 
// 5
// 1 2 3 4 5
// 6
// //O/P: 
// 2
int main(){
    int target,size;
    scanf("%d",&size);
    int num=size;
    int a[size];
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    scanf("%d",&target);

    printf("\n\n scanning done");

    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum+=a[j];
            if(sum>=target && num>j-i+1 ){
                num=j-i+1;
                printf("%d -%d\n",num,sum);
            }
        }
    }

    printf("\n\n%d",num);
}