#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node *next;
}*out;

int ins_end(char c){
    struct node *ptr=malloc(sizeof(struct node)),*temp=out;

    if(ptr==NULL){
        printf("\nmemory overflow");
    }else{
        ptr->next=NULL;
        if(c=='1')
            ptr->data='0';
        else if(c=='0')
            ptr->data='1';
        else
            ptr->data=c;
        if(out==NULL){
            out=ptr;
        }else{
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
        }
    }
}

int main(){
    char c;
    struct node *ptr;
    printf("Enter a number :");
    while(1){
        scanf("%c",&c);
        printf("%c",c);
        ins_end(c);
        if(c='\0' || c=='\n')
            break;
    }

    ptr=out;

    printf("\nOutput =");
    while(ptr->next!=NULL){
        printf("%c",ptr->data);
        ptr=ptr->next;
    }
    
    return 0;
}