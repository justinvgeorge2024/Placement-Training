// nxm type patterns

/*
Pattern -1

1         *
2       * * *
3     * * * * *
4   * * * * * * *
5 * * * * * * * * *
  1 2 3 4 5 6 7 8 9
*/

// // program 1  -- using if-else-if inside 2 nested for loop
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*n-i;j++)
//         {
//             if(j<=n-i)
//                 printf(" ");
//             else if(j<=n+i-1)
//                 printf("*");        
//         }
//         printf("\n");
//     }
// }

// // program 2  -- using if-else-if inside 2 nested for loop-- more optimised
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+i-1;j++) // condition changed to prev. else if
//         {
//             if(j<=n-i)
//                 printf(" ");
//             else //if(j<=n+i-1)
//                 printf("*");        
//         }
//         printf("\n");
//     }
// }


// alt prgm-- 1 outer for loop and 2 interior non-nested-for loops
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int j=1;
//         for(;j<=n-i;j++)
//             printf(" ");
//         for(;j<=n+i-1;j++)
//             printf("*");
//         printf("\n");
//     }
// }


/*
Pattern -2
1         *
2       * * *
3     * * * * *
4   * * * * * * *
5 * * * * * * * * *
6   * * * * * * *
7     * * * * *
8       * * *
9         *
  1 2 3 4 5 6 7 8 9
*/

// //prg-1 : input 5. print 2*5-1=9 rows.
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<n;i++){
//         int j=1;
//         for(;j<=n-i;j++)
//             printf(" ");
//         for(;j<=n+i-1;j++)
//             printf("*");
//         printf("\n");
//     }
//     for(int i=n;i>=1;i--){
//         int j=1;
//         for(;j<=n-i;j++)
//             printf(" ");
//         for(;j<=n+i-1;j++)
//             printf("*");
//         printf("\n");
//     }
// }

// //prg-2 : n=9, print 9 rows
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=(n+1)/2;i++){
//       for(int j=1;j<=n-i;j++)
//           printf(" ");
//       for(int j=1;j<=2*i-1;j++)
//           printf("*");
//       printf("\n");
//     }
//     for(int i=n/2;i>=1;i--){
//       for(int j=1;j<=n-i;j++)
//           printf(" ");
//       for(int j=1;j<=2*i-1;j++)
//           printf("*");
//       printf("\n");
//     }
// }



/*
Pattern -3

1-    1
2-   212
3-  32123
4- 4321234
5-543212345
6- 4321234
7-  32123
8-   212
9-    1
  |||||||||
  123456789
*/
//prg 1
#include<stdio.h>
int main(){
    int n;
    int val;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        val =i;
        for(int j=1;j<=n+i-1;j++){
          if(j<=n-i){
            printf("   ");
          }else{
            if(j<n)
              printf("%3d",val--);  // 3 for indentation-- will give spacing for 1 and 2 digit  num( properly support 3 digit numbers)
            else                    // .2 will affix 0 to the front of single digit and 2 digit numbers. 
              printf("%.3d",val++);   
          }
        }
        printf("\n");
    }
    for(int i=n;i>=1;i--){
        val =i;
        for(int j=1;j<=n+i-1;j++){
          if(j<=n-i){
            printf("   ");
          }else{
            if(j<n)
              printf("%3d",val--);
            else
              printf("%.3d",val++);
          }
        }
        printf("\n");
    }
}

// //prg2
// #include<stdio.h>
// int main(){
//     int n,end,start;
//     scanf("%d",&n);
//     // printf("%d",((n*2)-1)/2);
//     for (int i = 1,k=1; i <= n+(n-1); i++)//(n-1) is the number of times it comes after intial n times to form diamond
//     {
//         int j = 1;int m=k;
//         for (; j<=n-k;j++)
//         {            
//                 printf("  ");    
//         }
//         for (; j < n+k;j++)
//         {
//             if(j<n)
//                 printf("%d ",m--);
//             else printf("%d ",m++);
//         }
//         if(i<n) ///here i is checked if grt or eql to n then the k is decreased instead of increment
//             ++k;
//         else
//             --k;
//         printf("\n");
//     } 
// }
