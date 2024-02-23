//program to perform addition between two numbers without using arithmetic operators

#include<stdio.h>

int main(){
    int i,a,b;
    
    a= 3;b=4;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    for(i =1;i<=b;i++)
        a++;
    printf("sum is: %d",a);

    return 0;
    } 