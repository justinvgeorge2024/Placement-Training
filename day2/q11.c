// to check if given number is armstrong number or not
//logic: cubes of individual digits should result in the actual number

#include<stdio.h>

int main(){
    int n,cubes=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=n;i!=0;){
        cubes+=(i%10)*(i%10)*(i%10);
        i=i/10;
    }
    if(n==cubes){
        printf("Armstrong number");
    }
    else
        printf("Not an Armstrong number");
    return 0;
}