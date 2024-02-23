//write a c program to convert every key which is pressed on the keyboard as an Astrisk symbol
#include<stdio.h>
#include<conio.h>

#define max 100
int main(){

    char a[max];
    int i=0;
    a[i]='\0';
    printf("Please enter your password:\n");
    printf("!Press enter to confirm!\n");
    for(i=-1;a[i]!=13;){
        i++;
        a[i]=getch();
        printf('\a');
        if(a[i]=='\b'){
            printf("\b \b");
            i--;
        }else{
            printf("*");
        }
    }
    a[i]='\0';

    return 0;
}