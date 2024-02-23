//Leap year or not - ternary operator
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    // if(year/4){
    //     if(year/100){
    //         if(year/400)
    //             printf("Leap year");
    //         else
    //             printf("not a leap year");
    //     }
    //     else
    //         printf("leap year");
    // }
    (year%4==0)?(year%100==0)?(year%400==0)?printf("Leap Year"):printf("not a Leap Year"):printf("Leap Year"):printf("not a leap year");
}