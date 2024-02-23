//write three functions .. keep it on header files..
//matrix addition, matrix substraction, matrix multiplication
//HW

#include<stdio.h>
#include "matrix_operations.h"
#define max 100

void read_matrix(int a[max][max],int r,int c){
    printf("Enter values of the matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
}

int main(){
    int a[max][max],b[max][max],c,r1,c1,r2,c2;

    printf("1: Matrix addition\n");
    printf("2: Matrix substraction\n");
    printf("3: Matrix multiplication\n");
    printf("Select Choice: \n");
    scanf("%d",&c);
    if(c<1&&c>3){
        printf("invalid choice");
        return 0;
    }
    
    printf("\nEnter the number of rows and columns for first matrix\n");
    scanf("%d%d",&r1,&c1);
    read_matrix(a,r1,c1);
    printf("\nEnter the number of rows and columns for second matrix\n");
    scanf("%d%d",&r2,&c2);
    read_matrix(b,r2,c2);

    switch(c){
        case 1: 
        if(r1!=r2 && c1!=c2){
            printf("Matrices can't be added");
        }else{
            mat_add(a,b,r1,c1);
        }
        break;
        case 2: 
        if(r1!=r2 && c1!=c2){
            printf("Matrices can't be substracted");
        }else{
            mat_sub(a,b,r1,c1);
        }
        break;
        case 3: 
        if(r2!=c1){
            printf("Matrices can't be multiplied");
        }else{
            mat_mul(a,b,r1,c1,r2,c2);
        }
        break;
    }
    return 0;
}