//program to count the number of vowels , consonats, digits, special characters
// in a given string and to convert vowels to *

#include<stdio.h>

int main(){
    int v=0,c=0,d=0,s=0;
    char a[100];

    printf("Enter a string :");
    scanf("%s",a);

    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            v++;
            a[i]='*';
        }
        else if((a[i]>=65&& a[i]<=90)||(a[i]>=97 &&a[i]<=122)){
            c++;
        }
        else if(a[i]>=48&&a[i]<=57){
            d++;
        }
        else
            s++;
    }
    printf("Formatted String = %s\n",a);
    printf("Number of vowels : %d\n",v);
    printf("Number of consonants : %d\n",c);
    printf("Number of digits : %d\n",d);
    printf("Number of special characters : %d\n",s);
    return 0;
}