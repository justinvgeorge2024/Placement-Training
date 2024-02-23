//to detect char is alphabet or not

#include<stdio.h>
int main(){
    char s;
    printf("Enter a character:");
    scanf("%c",&s);
    if((s>=65&&s<=90) ||(s>=97&&s<=122)){
        printf("it is an alphabet character");
    }else
    printf("it is not a alphabet character");
    return 0;
}