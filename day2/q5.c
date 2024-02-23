//to print fibonacci number in reverse order

#include<stdio.h>

void fibonacci(int n,int i,int j){
    if(n>0){
        fibonacci(n-1,i+j,i);
        printf("  %d",i);
    }
}

// int main(){
//     int n;
//     printf("Enter the number of numbers to be printed:");
//     scanf("%d",&n);
//     if (n>0)
//     fibonacci(n,0,1);
//     else
//         printf("Invalid Input");
//     return 0;
// }