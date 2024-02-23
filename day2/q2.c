#include<stdio.h>
int main(){
    int i=-10;
    for(;i;(printf("%d",i++)));
    // will print from -10 to -1. and loop will have condition as false

    double value=0;  // float or int --- value is 0
    if(value){      // value is 0 or if condition is treated as false
        printf("if is true");  // wont be executed
    }
    printf("excellent\n");  // will be executed.
    return 0;

}       