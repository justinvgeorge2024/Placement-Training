//write a program to biggest of 3 using simple if...else
//based on conditional statements only

#include<stdio.h>
int main()
{
    int a,b,c,lar;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b &&a>c){
        lar=a;
    }
    else{
        if(b>c)
            lar=b;
        else
            lar=c;
    }
    printf("Largest is %d",lar);
    return 0;
}