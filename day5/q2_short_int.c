#include<stdio.h>

void main(){
    short int a = 32767; // short int ranges b/w -32768 to 32767

    printf("%d",a+1); // prints 32768 -- not loop to -32768 since %d is of int specifier
    printf("\n");
    printf("%hd",a+1); // %hd is short int specifier // loops to -32768
}