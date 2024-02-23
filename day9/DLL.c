#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next, *prev;
}*head;


void ins_beg(){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("Overflow!!! --\n");
    }else{
        // int data;
        printf("Enter data : ");
        scanf("%d",&ptr->data);

        ptr->prev=NULL; // first nodes -> prev is always null

        if(head==NULL){
            ptr->next=NULL;
            head=ptr;
        }else{
            ptr->next=head;
            head->prev=ptr;
            head=ptr;
        }
    }
}


void ins_end(){
    
    struct node *temp=head;
    struct node *ptr = (struct node*)malloc(1*sizeof(struct node));

    if(ptr==NULL){
        printf("OVERFLOW occured - value not inserted");
    }else{

        printf("Enter data : ");
        scanf("%d",&ptr->data);

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

void ins_random(){
    struct node *ptr = (struct node*)malloc(1*sizeof(struct node));
    struct node * temp=head,*temp1=head;
    int pos;
    if(ptr==NULL){
        printf("OVERFLOW occured - value not inserted");
    }else{
        printf("Enter data : ");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        ptr->prev=NULL;
        printf("Enter position (index starts at 1) : ");
        scanf("%d",&pos);

        if(pos==1){
            ptr->next=head;
            head->prev=ptr;
            head=ptr;
            return;
        }
        else{
            for(int i=1;i<pos && temp!=NULL;i++){
                if(pos-1==i){
                    ptr->next=temp->next;
                    ptr->prev=temp;
                    if(temp->next!=NULL){
                        temp->next->prev=ptr;
                    }
                    temp->next=ptr;
                    return;
                }
                temp=temp->next;
            }
                
        }
        printf("insertion not possible!!! \n");
    }
}

void del_beg(){
    struct node *ptr=head;
    if(head==NULL){
        printf("Underflow !!!\n\n");
    }else{
        head=head->next;
        if(head!=NULL)
            head->prev=NULL;
        printf("deleted data : %d\n",ptr->data);
        free(ptr);
    }
}

void del_end(){
    struct node *ptr=head;
    if(head==NULL){
        printf("Underflow !!!\n\n");
    }else{
        while(ptr->next!=NULL){
                ptr=ptr->next;
        }
        if(ptr->prev==NULL){
            head=NULL;
        }else{
            (ptr->prev)->next=NULL;
        }
    } 
    printf("deleted data : %d\n",ptr->data);
    free(ptr);
}

void del_random(){
    struct node *ptr=head;
    int pos;
    if(head==NULL){
        printf("Underflow !!!\n\n");
    }else{
        printf("Enter the position of node to be deleted : ");
        scanf("%d",&pos);

        for(int i=1;i<=pos && ptr!=NULL;i++){
            if(i==pos){
                if(ptr->prev==NULL){
                    head=head->next;
                    head->prev=NULL;
                }
                else{
                    ptr->prev->next=ptr->next;
                    if(ptr->next!=NULL)
                        (ptr->next)->prev=ptr->prev;
                }
                printf("deleted data : %d\n",ptr->data);
                free(ptr);
                return;
            }
            ptr=ptr->next;
        }
    } 
    printf("Invalid position - node not deleted\n");

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


void traverse_lf(){
    
    struct node *ptr=head;
    printf("tail->head :||");
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    while(ptr!=NULL){
        printf(" %d |",ptr->data);
        ptr=ptr->prev;
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

void sort(){
    struct node *ptr1 =head;
    struct node *ptr2 ;

    for(;ptr1!=NULL;ptr1=ptr1->next){
        for(ptr2=ptr1;ptr2!=NULL;ptr2=ptr2->next){
            if(ptr1->data>ptr2->data){
                ptr1->data=ptr1->data+ptr2->data-(ptr2->data=ptr1->data);
            }
        }
    }
    printf("Sorting Finished !!!\n");
}


void main(){

    int choice=1;
    while(choice!=0){
        printf("\n---\n1.INS start\t2.INS end\t3.INS by position \n4.display \n5. DEL start\t6.DEL end\t7.DEL pos \n8.SORT \n0.exit\nselect operation: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: ins_beg();
                    break;
            case 2: ins_end();
                    break;
            case 3: ins_random();
                    break;
            case 4: traverse_fl();
                    traverse_lf();
                    break;
            case 5: del_beg();
                    break;
            case 6: del_end();
                    break;
            case 7: del_random();
                    break;
            case 8: sort();
                    traverse_fl();traverse_lf();
            case 0: break;
            default: printf("INVALID choice\n\n");
                    break;
        }
    }

    del_alloc();

}