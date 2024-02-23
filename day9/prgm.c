// input a num
// check using check() -> pos or neg
// if pos: check if prime
// if not pos : user again has to enter a pos num

#include<stdio.h>
int check(int n){
    int i=0;
    if(n>0){
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                printf("Entered number is positive and not a prime\n");
                return 0;
            }
        }
        printf("Entered number is positive and a prime\n");
        return 0;
    }
    else if(n==0)
        printf("Entered number is zero, please enter another number:");
    else
        printf("Entered number is negative , please enter another number:");
    return 1;
}
int main(){
    int n=1;
    printf("Enter a number :");
    do{
        scanf("%d",&n);
    }while(check(n));

    return 0;
}