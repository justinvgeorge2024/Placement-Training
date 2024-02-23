//A strong number is a number whose sum of the factorial of digits is equal to its original number; eg 145

#include<Stdio.h>
#include "factorial.h"

int main(){
    int n,factsum=0;

    printf("Enter a +ve number(integers greater than 0 ):");
    scanf("%d",&n);

    if(n<0 ){
        printf("\nInvalid Input\n");
        return(-1);
    }

    for(int temp=n;temp>0;temp=temp/10){
        factsum+=fact(temp%10);
    }
    if(factsum==n)
        printf("%d is strong number",n);
    else
        printf("%d is not a strong number",n);
    return 0;
}
