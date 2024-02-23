//word based string
//think Twice Code Once

//KNIHT eciwt EDOC ecno

// concept - reverse each word.
// display entire word in either upper or lower case in an alternating pattern.

#include<stdio.h>

int main(){

    char a[100];
    scanf("%[^\n]s",a);
    int count=0,start=0;
    
    for(int i=0;a[i]!='\0';i++)
        if(a[i+1]==' '||a[i+1]=='\0'){
            if(count%2==0)
                for(int j=i;j>=start;j--)
                    if(a[j]>=97&&a[j]<=122)
                        printf("%c",a[j]-32);
                    else
                        printf("%c",a[j]);
            else
                for(int j=i;j>=start;j--)
                    if(a[j]>=65&&a[j]<=90)
                        printf("%c",a[j]+32);
                    else
                        printf("%c",a[j]);

            printf(" ");
            count++;
            start=i+2;
        }
    return 0;
}