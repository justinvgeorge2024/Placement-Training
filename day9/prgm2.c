//enter number
//check if prime or not.
//if prime... reenter number
// then find prime factors

#include<stdio.h>

int prime(int val){
    for(int i=2;i<=val/2;i++)
        if(val%i==0)
            return 0;
    return 1;
}

void p_factors(int n){

    int i=1;
    for(int i=2;i<n/2;i++){
        if(prime(i) && n%i==0){
            printf(" %d",i);
        }
    }   
}

int main(){

    int num=2;
        printf("\nEnter a number :");
    do{
        scanf("%d",&num);
        if(num<=1){
            printf("\nEnter another number :");
            continue;
        }
        if(prime(num)){
            printf("\nEntered number is prime\nPlease Enter a composite number:");
            num=-1;
        }
    }while(num<2);

    printf("The prime factors of %d are:",num);
    p_factors(num);
}