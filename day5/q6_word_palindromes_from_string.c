//word based question

// I/P:Malayalam is a language
// O/P: Malayalam a


// concept-- print out only the palindromes

#include<stdio.h>

int ispal(char a[],int start, int end){
    for(int i=start,j=end;i<=j;i++,j--){
        if (a[i]!=a[j])
            return 0;
    }
    return 1;
}

void main(){
    char a[100];
    gets(a);
    int start=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i+1]==' '||a[i+1]=='\0'){
            // int flag=0;
            // int mid =start+(i-start+1)/2;
            // for(int j=start;j<mid;j++){
            //     if(a[j]!=a[i-j])
            //         flag=1;
            // }
            // if(flag==0)
            if(ispal(a,start,i))
            {   for(int j=start;j<=i+1;j++)
                    printf("%c",a[j]);
            }
            start=i+2;
        }
        
    }
    
}