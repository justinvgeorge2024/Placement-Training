#include<stdio.h>
#include<stdlib.h>
struct node{     //self referrential structure
    int data;
    struct node* next;
}*head; // declaration of head pointer


void insert_beg(){
    struct node *ptr;

    ptr = (struct node*)malloc(1*sizeof(struct node));

    if(ptr==NULL){
        printf("OVERFLOW occured - value not inserted");
    }else{

        int item;
        printf("enter data :");
        scanf("%d",&item);

        ptr->data =item;

        if(head==NULL){   // insert to empty LINKED LIST
            ptr->next=NULL;
            head=ptr;
        }else{           // insert to non-empty LINKED LIST
            ptr->next=head;
            head=ptr;
        }
    }
}


void insert_end(){
    
    struct node *ptr=head,*temp;
    
    temp = (struct node*)malloc(1*sizeof(struct node));

    if(temp==NULL){
        printf("OVERFLOW occured - value not inserted");
    }else{

        int item;
        printf("enter data :");
        scanf("%d",&item);

        temp->data =item;
        temp->next=NULL;
        if(head==NULL){   // insert to empty LINKED LIST
            temp->next=NULL;
            head=temp;
        }else{           // insert to non-empty LINKED LIST
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
    }
}

void insert_random(){
    int pos;

    struct node *ptr=head,*temp;
    
    temp = (struct node*)malloc(1*sizeof(struct node));

    if(temp==NULL){
        printf("OVERFLOW occured - value not inserted");
    }else{

        int item;
        printf("enter data :");
        scanf("%d",&item);
        printf("enter pos (starts at index 1):");
        scanf("%d",&pos);

        temp->data =item;
        temp->next=NULL;
        
        if(head==NULL){
            head=temp;
            return;
        }else{
            for(int i=1;ptr!=NULL && i<pos;i++){   
                ptr=ptr->next;
            }
            temp->next=ptr;
            head=temp;
            return;
        }
        printf("Invalid Position!!!!\n\n");
    
    }
}

void del_beg(){
    struct node *ptr=head;

    if(ptr==NULL){
        printf("UNDERFLOW occured - !!!\n");
    }else{

        int item;
        printf("deleted data :");
        printf("%d\n",ptr->data);

        head =head->next;
        free(ptr);
    }
}


void del_end(){
    
    struct node *ptr=head,*temp;
    
    if(head==NULL){
        printf("UNDERFLOW occured \n\n");
    }else{
        while(ptr->next!=NULL){
            temp=ptr;
            ptr=ptr->next;
        }
        printf("deleted data :%d\n",ptr->data);
        temp->next=NULL;
        free(ptr);
        
    }
}

void del_random(){
    int pos;

    struct node *ptr=head,*temp,*prev;
    
    if(head==NULL){
        printf("UNDERFLOW occured \n\n");
    }else{

        printf("enter pos (starts at index 1):");
        scanf("%d",&pos);

                   // insert to non-empty LINKED LIST
        
        if(head->next==NULL){
            temp=head;
            free(temp);
            head=NULL;
            return;
        }else{
            for(int i=1;ptr!=NULL && i<pos;i++){   
                prev=ptr;
                ptr=ptr->next;
            }
            prev->next=ptr->next;
            free(ptr);
            return;
        }
        printf("Invalid Position!!!!\n\n");
    
    
    }
}


void traverse(){
    
    struct node *ptr=head;
    printf("||");
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

int main(){
    int choice=1;
    while(choice!=0){
    printf("\nselect operation: \n1.INS start\t2.INS end\t3.INS by position \n4.display \n5. DEL start\t6.DEL end\t7.DEL pos \n0.exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: insert_beg();
                break;
        case 2: insert_end();
                break;
        case 3: insert_random();
                break;
        case 4: traverse();
                break;
        case 5: del_beg();
                break;
        case 6: del_end();
                break;
        case 7: del_random();
                break;
        case 0: exit(1);
                break;
        default: printf("wrong choice\n\n");
                break;
    }
    }
    traverse();

    del_alloc();
    return 0;
}