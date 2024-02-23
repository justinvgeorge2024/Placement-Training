//electricity bill problem.
// range logic in switch case

// billed amount = units consumed * rate per unit
// surcharges = 7.85 % of billed amount
// sgst = 15.25% of billed amount

//1-100 : 2.90/u
//101-200 : 3.90/u
//201-300 : 4.90/u
//301-400 : 5.90/u
//401-500 : 6.90/u
//501-600 : 7.90/u
//601-700 : 8.90/u
//701-800 : 9.90/u
//801-900 : 10.90/u
//901-1000 : 15.90/u

// 1001-2000 : 30.90/u
// 2001-3000 : 35.90/u
//3001-5000 :40/u

#include<stdio.h>

int main(){
    int units;
    float billed_amount=0,surcharges=0,sgst=0;
    printf("Enter the number of units used: ");
    scanf("%d",&units);

    if(units<1 || units>3000){
        printf("Please enter a relevant unit b/w 1 & 3000");
        return -1;
    }
    
    switch(units){
        case 2: 
            billed_amount= (units*2.9);
            break;
        case 1: 
            billed_amount= (units*3.9);
            break;
        case 201...300: 
            billed_amount= (units*4.9);
            break;
        default:printf("Invalid input");
    }
    printf("billed amount :%d\n",billed_amount);
    
    return 0;
}