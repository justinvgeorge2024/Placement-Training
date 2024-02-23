//fascinanting number or not
//a number which when concatenated with its multiples of 2 & 3 together gives a number--
//-- that contains all digits from 1 to 9 exactly once.
#include<stdio.h>
#include<string.h>

int num_digits(int n){
    int i;
    for( i=0;n!=0;i++){
        n=n/10;
    }
    return i;
}
int main(){
    int n,val,c;
    printf("Enter a number :");
    scanf("%d",&n);
    c= num_digits(n*2);
    val=n;
    for(int i=0;i<c;i++){
        val=val*10;
    }
    val+=n*2;
    c= num_digits(n*3);
    val=n;
    for(int i=0;i<c;i++){
        val=val*10;
    }
    val+=n*3;
    printf("The numbers are : %d %d %d -val%d",n,n*2,n*3,val);
    char a[10]= itoa(val);
    printf("\n%s",a);
    

    return 0;
}