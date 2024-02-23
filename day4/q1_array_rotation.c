#include<stdio.h>

void main(){

    int size;
    scanf("%d",&size);
    int a[size];

    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    
    int rotate;
    char ch;
    scanf("\n%c %d",&ch,&rotate); // for character pre and post separators must be specifically mentioned.
    int temp,j;

    //RIGHT ROTATION USING TEMP Variable
    // for(int i=0; i<rotate;i++){
    //  temp =a[size-1];
    //  for(j=size-1;j>=1;j--)
    //      a[j]=a[j-1];
    //  a[j]=temp;
    // }

    
    //left ROTATION USING TEMP Variable
    // for(int i=0; i<rotate;i++){
    //  temp =a[0];
    //  for(j=0;j<size-1;j++)
    //      a[j]=a[j+1];
    //  a[size-1]=temp;
    // }

    if(ch=='l'||ch=='L'){
    //left rotation -swapping using single line- no temp variable
    for(int j=0;j<rotate;j++)
    for(int i=0;i<size-1;i++)
        a[i] = a[i]+a[i+1]-(a[i+1]=a[i]);
    }
    else{
    //Right rotation -swapping using single line- no temp variable
    for(int j=0;j<rotate;j++)
    for(int i=size-1;i>0;i--)
        a[i] = a[i]+a[i-1]-(a[i-1]=a[i]);
    }
    //print
    printf("\nRight rotate :");
    for(int i=0;i<size;i++)
        printf("%d",a[i]);
    

}