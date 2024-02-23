//taxi fare 
#include<stdio.h>
int main(){
    int km,billed_amount;
    float tollcharges,maintenance,drvr_allowance;
    printf("Enter the distance travelled in kilometers: ");
    scanf("%d",&km);
    if(km<0||km>3000){
        printf("invalid input- please input range b/w 0 and 3000");
        return -1;
    }
    if(km<101)
        billed_amount+=km*12.90;
    else 
        billed_amount+=100*12.90;
    if(km<201)
        billed_amount+=(km-100)*13.90;
    else 
        billed_amount+=100*13.90;
    if(km<301)
        billed_amount+=(km-200)*14.90;
    else  
        billed_amount+=100*14.90;
    if(km<401)
        billed_amount+=(km-300)*15.90;
    else  
        billed_amount+=100*15.90;
    if(km<501)
        billed_amount+=(km-400)*16.90;
    else  
        billed_amount+=100*16.90;
    if(km<601)
        billed_amount+=(km-500)*19.90;
    else  
        billed_amount+=100*19.90;
     if(km<701)
        billed_amount+=(km-600)*22.90;
    else  
        billed_amount+=100*22.90;
    if(km<801)
        billed_amount+=(km-700)*23.90;
    else  
        billed_amount+=100*23.90;
    if(km<901)
        billed_amount+=(km-800)*24.90;
    else  
        billed_amount+=100*24.90;
    if(km<1001)
        billed_amount+=(km-900)*25.90;
    else  
        billed_amount+=100*25.90;
    if(km<2001)
        billed_amount+=(km-1000)*30.90;
    else  
        billed_amount+=1000*30.90;
    if(km<3001)
        billed_amount+=(km-2000)*35.90;

    tollcharges= billed_amount*18/100;
    maintenance =6.75*billed_amount/100;
    drvr_allowance=5.75*billed_amount/100;
    
    printf("Billed amount = %d\n",billed_amount);
    printf("tollcharges = %d\n",tollcharges);
    printf("maintenance = %d\n",maintenance);
    printf("driver allowance = %d\n",drvr_allowance);
    return 0;
}