#include<stdio.h>

void main(){
    int a=6;

    printf("%d %d %d %d ",++a,a,a++,++a);
// 9 9 7 9
// in c end of statements are marked either by , or ;
// double stack inplementation
// method
// 1. right to left... calculation
// 2. left to right... leave post_operation_values as such, update other values to final value obtained in 1.
a=6;
    printf("\n\n%d %d %d %d %d %d %d",++a,a,a++,++a,a--,--a,a++);
//8 8 6 8 6 8 6
}
