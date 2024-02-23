// to check if char is vowel or not

#include<stdio.h>
int main(){
    char s;
    printf("Enter a character:");
    scanf("%c",&s);
    if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
        printf("It is a vowel");
    else
        printf("It is not a vowel");
        return 0;
}