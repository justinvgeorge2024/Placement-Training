//character based question

// I/P:Malayalam is a language
// O/P: Mblzyblzm is b lzngvzgf

// Explanation -- all vowels are altered
// 1st vowel +1 . second one -1, in that sequence

#include<stdio.h>

int main(){
    char a[100];
    scanf("%[^\n]s",&a);
    int flag=0;

    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
               if(flag%2==0){
                    printf("%c",a[i]+1);              
                    flag++;
               }
               else{
                    if(a[i]=='a'||a[i]=='A')
                        printf("%c",a[i]+25);              
                    else
                        printf("%c",a[i]-1);
                    flag++;
               }
        }
        else
            printf("%c",a[i]);

    }        
        
    return 0;

}