//if the sum of all factors of a number (exclusive to itself) is equal to origginal number.
//then its a perfect number.

#include<stdio.h>
int main(){
    int n,sum=1;
    printf("enter a number(positive integer) :");
    scanf("%d",&n);
    if(n<1){
        printf("invalid input");
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
            sum+=i;
    }
    if(n==sum)
        printf("It is a perfect number");
    else
        printf("It is not a perfect number");
    return 0;
}