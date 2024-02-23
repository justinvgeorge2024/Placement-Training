//write a program to find factorial of a given number using recursive method, for loop, do while loop

#include<stdio.h>

int fact(int num){
    if(num ==1 || num==0)
        return 1;
    else
        return num*fact(num-1);
}

int main(){
    int i,num,sum=1,dsum=1;
    printf("Enter a number(integers from 0 to 10):");
    scanf("%d",&num);

    if(num<0 || num>10){
        printf("\nInvalid Input\n");
        return(-1);
    }

    for (i=num;i>1;sum*=i,i--);
    
    i=num;
    do{
        dsum*=i;
        i--;
    }while(i>1);

    printf("The factorial using recurive method is : %d \n",fact(num));
    printf("The factorial using for loop is : %d \n",sum);
    printf("The factorial using do while loop is : %d \n",dsum);

    return(0);

}