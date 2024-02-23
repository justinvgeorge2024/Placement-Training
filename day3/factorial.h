//write a program to find factorial of a given number using recursive method, for loop, do while loop

#include<stdio.h>

int fact(int num){
    if(num ==1 || num==0)
        return 1;
    else
        return num*fact(num-1);
}
