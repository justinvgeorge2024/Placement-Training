#include<stdio.h>

// //nxn grid of "* "
// // * * * *
// // * * * *
// // * * * *
// // * * * *


// int main(){

//     int n;
//     scanf("%d",&n);   
    
//     for(int j=1;j<=n;j++)
//     {    for(int i=1;i<=n;i++)
//             printf("* ");
//         printf("\n");
//     }
// }


// * * * *
// *     *
// *     *
// * * * *

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n){
                printf("* ");
            }else
            printf("  ");
        }
        printf("\n");
    }
}