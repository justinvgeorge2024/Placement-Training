//to find if the given number is automorphic or not.
//automorphic number... number whose square ends with same number

#include<stdio.h>

//importing sub program
#include "q5.c"

int main(){
    long int n,square,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    square = n*n;
    for(int temp=n;temp!=0;i*=10){
        temp=temp/10;
    }
    printf("square : %d\n",square);
    if(square%(i)==n%(i)){
        printf("It is an automorphic number");
    }
    else
        printf("It is not an automorphic number");

    printf("\n\nFibonacci Series in reverse order:");
    if (n>0)
        fibonacci(n,0,1);
    else
        printf("Invalid Input");
    return 0;
    
    return 0;
}