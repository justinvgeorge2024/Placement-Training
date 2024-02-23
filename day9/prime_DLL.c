#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next, *prev;
}*head;

int prime(int num){
    for(int i=2;i<=num/2;i++)
        if(num%i==0)
            return 0;
            
    return 1;
}

void ins_end(int val){
    
    struct node *temp=head;
    struct node *ptr = (struct node*)malloc(1*sizeof(struct node));

    if(ptr==NULL){
        printf("OVERFLOW occured - value not inserted");
    }else{
        ptr->data=val;
        ptr->next=NULL; // last nodes -> next is always null

        if(head==NULL){
            ptr->prev=NULL;
            head=ptr;
        }else{
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->prev=temp;
        }
    }        
}

void traverse_fl(){
    
    struct node *ptr=head;

    printf("head->tail :||");
    while(ptr!=NULL){
        printf(" %d |",ptr->data);
        ptr=ptr->next;
    }
    printf("|\n");
}


void del_alloc(){
    
    struct node *ptr=head;
    while(ptr!=NULL){
        free(ptr);
        head=head->next;
        ptr=head;
    }
}

void main(){
    int n,count=0;
    printf("Enter the number of prime numbers to be displayed :");
    scanf("%d",&n);

    for(int i=1;count<n;i++){
        if(prime(i)){
            count++;
            ins_end(i);              
        }
    }

    traverse_fl();    
    del_alloc();

}