#include<stdio.h>

int main(){
    char a[100];
    scanf("%s",&a); //if input is "AB" , a[0]='A' a[1]='B' a[2]='\0' ,, rest might or might not be \0 depending on compiler

    printf("\n");
    for(int i=0;i<100;i++)
        printf("%c-%d _",a[i],a[i]);  
    printf("\n\n");
    int i;
    for(i=0;a[i]!='\0';i++)
        printf("%c-%d _",a[i],a[i]);
    
    printf("\n %c %d",a[i],a[i]);

    return 0;
}