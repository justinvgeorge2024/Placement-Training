#include<stdio.h>

int main(){
    int a,b,c,d,l;

    // printf("enter 3 nnumbers :\n");
    // scanf("%d%d%d",&a,&b,&c);

    // l=a>b?a>c?a:c:b>c?b:c;
    // printf("largest = %d",l);
    
    printf("enter 4 nnumbers :\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    // l=a>b?c>d?a>c?a:c:a>d?a:d:c>d?b>c?b:c:b>d?b:d;

    l=a>b?c>d?a>c?a:c
             :a>d?a:d
         :c>d?b>c?b:c
             :b>d?b:d;

    printf("largest = %d",l);
}