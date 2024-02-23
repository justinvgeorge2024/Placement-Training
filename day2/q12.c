//generate armstrong number within a limit

#include<stdio.h>
#include<math.h>

int check(int n){
    int cubes=0;
    for(int i=n;i!=0;){
        cubes+=(i%10)*(i%10)*(i%10);
        i=i/10;
    }
    if (n==cubes)
        return 1;
    else
        return 0;
    
}

int main(){
    int limit,i=2;
    printf("Armstrong numbers between 1 to n\n");
    printf("\tEnter the value of n(n>1): ");
    scanf("%d",&limit);
    if(limit<2){
        printf("invalid input");
        return 0;
    }
    printf("\tThe Armstrong Number in limit %d is : 1",limit);
    for( ;i<=limit;++i){
        if(check(i)!=0){
            printf(", %d ",i);
        }
    }
    return 0;
}