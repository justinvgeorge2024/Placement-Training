//biggest of 5 using terary
#include<stdio.h>
int main() {
    int a,b,c,d,e,lar;
    printf("enter the numbers\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    lar = (a>b&&a>c&&a>d&&a>e)?(a):(b>c&&b>d&&b>e)?b:(c>d&&c>e)?c:(d>e)?d:e;
    printf("largest is : %d",lar);
}