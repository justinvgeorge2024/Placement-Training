//sum & avg. of n given inputs
// do not use any looping statements & arrays 

#include<stdio.h>

int rec_call(int n){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    if(n!=1)
        return(num+rec_call(n-1));
    return(num);
}

int main(){
    int sum=0;
    float average=0;
    int n;

    printf("enter n :");
    scanf("%d",&n);
    if(n<1){
        printf("invalid input");
        return -1;
    }

    sum=rec_call(n);
    average=(float) sum/n;
    printf("Sum=%d\n",sum);
    printf("average=%f",average);

    return 0;
}
