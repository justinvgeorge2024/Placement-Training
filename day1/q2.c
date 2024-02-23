//to swap two values 

#include<stdio.h>

int main(){
    int n1,n2,a,b;

    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Before swapping  n1=%d and n2=%d\n",n1,n2);//printing before swapping
    
    //using 3rd variable
    a=n1,b=n2;
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swapping met-1: n1:%d , n2:%d\n",a,b);

    //using arithmetic operations: add-sub or mul-div
    a=n1,b=n2;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping met-2: n1:%d , n2:%d\n",a,b);

    //without using 3rd variable or arithmetic operators- using xor ^
    a=n1,b=n2;
     
     a=a^b;
     b=b^a;
     a=a^b;
    printf("after swapping met-3: n1:%d , n2:%d\n",a,b);
    // using a single calculation statement

    n1 = n1+n2-(n2=n1);

    printf("after swapping met-4: n1:%d , n2:%d",n1,n2);    
    return 0;
}