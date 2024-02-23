#include<stdio.h>
#define max 100

void print_mat(int a[max][max],int r,int c){
    for (int i = 0;i <r ; ++i){
        for ( int j=0;j<c;++j )
            printf("\t%d",a[i][j]);
        printf("\n");
    }
}

void mat_add(int a[max][max],int b[max][max], int r1,int c1){
    int c[max][max];
    for(int i=0;i<r1;i++)
        for (int j = 0;j <c1 ; ++j) 
            c[i][j]=a[i][j]+b[i][j];
    
    printf("\nThe matrix obtained after addition is:\n");
    print_mat(c,r1,c1);
    
}

void mat_sub(int a[max][max],int b[max][max], int r1,int c1){
    int c[max][max];
    for(int i=0;i<r1;i++)
        for (int j = 0;j <c1 ; ++j) 
            c[i][j]=a[i][j]-b[i][j];
    
    printf("\nThe matrix obtained after substraction is:\n");
    print_mat(c,r1,c1);
    
}

void mat_mul(int a[max][max],int b[max][max], int r1,int c1,int r2, int c2){
    int c[max][max];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<r2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("\nThe matrix obtained after multiplication is:\n");
    print_mat(c,r1,c2);
    
}