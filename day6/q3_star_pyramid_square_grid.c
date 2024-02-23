// nxn type grid patternss

/*
pattern -1
1    *
2   **
3  ***
4 ****
  1234
*/
// #include<stdio.h>
// // condition : i+j>=n+1 :print " *" else "  "
// // or i+j<=n+1 : print "  " else " *"
// void main(){
//     int n;
//     scanf("%d",&n);
//     printf("\n");
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i+j<=n+1)
//                 printf(" ");
//             else
//                 printf("*");
//         }
//         printf("\n");
//     }
// }

/* Pattern-2
1*
2**
3***
4****
 1234
*/
#include<stdio.h>
// condition : i>=j :print " *"  in for loop;
void main(){
    int n;
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;i>=j;j++){  // more optimised version ...
            
                printf("*");
        }
        printf("\n");
    }
}


/*Pattern -3
1    *
2   * *
3  * * *
4 * * * *
  1 2 3 4
*/

// #include<stdio.h>
// // condition : i+j>=n+1 :print " *" else "  "
// // or i+j<=n+1 : print "  " else " *"
// void main(){
//     int n;
//     scanf("%d",&n);
//     printf("\n");
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i+j<=n+1)
//                 printf(" ");
//             else
//                 printf("* "); // add a space to right side
//         }
//         printf("\n");
//     }
// }