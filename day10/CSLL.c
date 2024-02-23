#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
}*head;

void insert_beg(){
    struct node *ptr = (struct node *)malloc(sizeof(struct node)),*temp=head;

    if(ptr==NULL){
        printf("\nOverflow!!!\n");
        return;
    }else{
        printf("\nEnter value to be inserted: ");
        scanf("%d",&ptr->data);
        if(head==NULL){
            head=ptr;
            ptr->next=head;
        }else{
            while(temp->next!=head){
                temp=temp->next;
            }
            ptr->next=head;
            head=ptr;
            temp->next=head;
        }
    }
}

void insert_end(){
    struct node* ptr=(struct node*)malloc(sizeof(struct node)),*temp;

    if(ptr==NULL){
        printf("\nOverflow !!!");
        return;
    }else{
        printf("\nEnter the value to be inserted: ");
        scanf("%d",&ptr->data);
        if(head==NULL){
            head=ptr;
            ptr->next=head;
        }else{
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=head;
        }
    }
}
void insert_random(){
    struct node* ptr= (struct node *)malloc(sizeof(struct node)),*temp=head;
    int pos,i;

    if(ptr==NULL){
        printf("\n Overflow");
    }else{
        printf("\nEnter the value to be inserted :");
        scanf("%d",&ptr->data);
        printf("\nEnter the postion :");
        scanf("%d",&pos);
        if(pos==1){
            if(head==NULL){
                head=ptr;
                ptr->next=head;
            }
            else{
                while(temp->next!=head)
                    temp=temp->next;
                ptr->next=head;
                head=ptr;
                temp->next=head;
            }
        }else{
            temp=head->next;
            for(i=1;i<=pos && temp!=head;i++,temp=temp->next){
                if(i==1){
                    temp=head;
                }
                if(i==pos-1){
                    ptr->next=temp->next;
                    temp->next=ptr;
                    return;
                }
            }
            printf("\ninsertion not possible");    
        }
    }

}

void del_begin(){
    struct node *ptr=head;
    if(head==NULL){
        printf("\nUnderflow\n");
    }else{
        if(head==head->next){
            ptr=head;
            head->next=NULL;
            head=NULL;
        }else{
            while(ptr->next!=head){
                ptr=ptr->next;
            }
            ptr->next=head->next;
            ptr=head;
            head=head->next;
        }
        printf("\nDeleted value : %d",ptr->data);
        free(ptr);
    }
}

void del_end(){
    struct node *ptr=head,*prev;
    if(head==NULL){
        printf("\nUnderflow\n");
    }else{
        if(head==head->next){
            ptr=head;
            head->next=NULL;
            head=NULL;
        }else{
            while(ptr->next!=head){
                prev=ptr;
                ptr=ptr->next;
            }
            prev->next=head;
        }
        printf("\nDeleted value : %d",ptr->data);
        free(ptr);
    }
}

void del_random(){
    struct node * ptr=head, *prev;//=head->next;
    int pos,i;
    if(head==NULL){
        printf("\nUnderFlow\n");
        return;
    }else{
        printf("Enter position of element to be deleted:");
        scanf("%d",&pos);
        if(pos==1){
            if(head==head->next){
                head=NULL;
            }
            else{
                prev=ptr;
                ptr=ptr->next;
                while(ptr!=head){
                    prev=ptr;
                    ptr=ptr->next;
                }
                prev->next=head->next;
                head=head->next;
            }
        }else{
            for(i=2,prev=ptr,ptr=ptr->next;i<=pos && ptr!=head;i++,prev=ptr,ptr=ptr->next){
                if(i==pos){
                    prev->next=ptr->next;
                    break;
                }
            }

        }
        printf("\nDeleted value : %d",ptr->data);
        free(ptr);
    }
}

void traverse(){
    struct node* ptr=head;
    printf("\nList Content :");
    if(head!=NULL){
        do{
            printf(" %d",ptr->data);
            ptr=ptr->next;
        }while(ptr!=head && head !=NULL);
    }
}

int main(){

      int choice=1;
    while(choice!=0){
        printf("\n---\n1.INS start\t2.INS end\t3.INS by position \n4.display \n5. DEL start\t6.DEL end\t7.DEL pos \n0.exit\nselect operation: ");
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
            case 5: del_begin();
                    break;
            case 6: del_end();
                    break;
            case 7: del_random();
                    break;
            case 0: break;
            default: printf("INVALID choice\n\n");
                    break;
        }
    }

    
    return 0;
}