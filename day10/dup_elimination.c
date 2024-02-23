#include<stdio.h>

void main(){
    int n,i,j,a[n],s,b[n],flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    b[0]=a[0];
    s=1;
    for(i=1;i<n;i++){
        flag=1;
        for(j=0;j<s;j++){
            if(a[i]==b[j]){
                flag=0;
                break;
            }
        }
        if(flag){
            b[s]=a[i];
            s++;
        }
    }
    
    for(i=0;i<s;i++){
        printf("%d ",b[i]);
    }
}