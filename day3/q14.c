// c program to read array of three integers,
// calculate the sum of
// their digits and print largest sum

#include<stdio.h>

int main(){
    int l=-1,n[3],i,large;
    int s1=0,s2=0,s3=0;
    printf("Enter 3 numbers: ");
    for(i=0;i<3;i++){
        scanf("%d",&n[i]);
    }
    printf("\nSum of Digits\n");
    for(i=0;i<3;i++){
        int s=0;
        while ( n[i]> 0 ) {
            l=n[i]%10;
            s = s + l;
            n[i]=n[i]/10; 
        }
        if(i==0){
            s1=s;
            large=s;
            printf("The First digit is : %d \n",s1);
        }
        else if(i==1){
            s2=s;
            if(s>large){
                large=s;
            }
            printf("The Second digit is :  %d \n", s2);
        }else{
            s3=s;
            if(s>large){
                large=s;
            }
            printf("The Third digit is : %d  \n" , s3);
        }
    }
    printf("The largest is : %d",large);
    return 0;
}