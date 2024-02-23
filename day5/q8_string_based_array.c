//pattern

// I/O:abc3B2Cse4
// O/P:abcabcabcBBCseCseCseCse

#include<stdio.h>

void prnt(char a[],int start,int end,int n){
    // printf("\n\n %d, %d %d \n",start,end,n);
    for(int i=0;i<n;i++){
        for(int i=start;i<=end;i++)
            printf("%c",a[i]);
    }
}

int main(){
    char a[100];
    scanf("%[^\n]s",a);
    int start=0,end=-1,n=0;

    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=48&&a[i]<=57){
            n=n*10+a[i]-48;
           //printf("%d --",n);
           if(!(a[i+1]>=48&&a[i+1]<=57) ){
            prnt(a,start,end,n);
            n=0;
            start=i+1;
            end=i;
           }
        }
        else
            end++;
    }
    return 0;
}