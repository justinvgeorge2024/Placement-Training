#include<stdio.h>

//1 *           *
//2   *       *
//3     *   *
//4       *
//5     *   *
//6   *       *
//7 *           *
//  1 2 3 4 5 6 7
// condition:
// i==j and i==(n-j)+1
// OR
// i==j and i+j==n+1 

int main(){

    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1)
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }    
}