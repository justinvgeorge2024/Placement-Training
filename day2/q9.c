#include<stdio.h>

#include "q9.h"
int main(){
    float a,b,value=-1;
    int c;
    int d,e;
    printf("1: addition\n");
    printf("2: substraction\n");
    printf("3: multiplication\n");
    printf("4: divisiion\n");
    printf("5: modulus\n");
    printf("Select Choice: \n");
    scanf("%d",&c);
    if(c<1&&c>5){
        printf("invalid choice");
        return 0;
    }
    printf("Enter two numbers: ");
    if(c==5)
    scanf("%d%d",&d,&e);
    else
    scanf("%f%f",&a,&b);

    switch(c){
        case 1: value = addition(a,b);
                break;
        case 2: value = substraction(a,b);
                break;
        case 3: value = multiplication(a,b);
                break;
        case 4: value = division(a,b);
                break;
        case 5: value = modulo(a,b);
                break;
    }
    if(c==5)
    printf("Result = %.0f",value);
    else
    printf("Result = %f",value);
    return 0;
}