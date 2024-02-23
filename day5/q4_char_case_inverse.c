#include<stdio.h>

int main(){
    char a[100];
    scanf("%[^\n]s",a);

    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90)
            printf("%c",a[i]+32);
        else if(a[i]>=97 && a[i]<=122)
            printf("%c",a[i]-32);
        else
            printf("%c",a[i]);
       
    }
}