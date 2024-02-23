#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*even,*odd;


void insert_end(struct node **list,int val){
    
    struct node *ptr=*list,*temp;
    
    temp = (struct node*)malloc(1*sizeof(struct node));

    if(temp==NULL){
        printf("OVERFLOW occured - value not inserted");
    }else{

        temp->data =val;
        temp->next=NULL;
        if(*list==NULL){   // insert to empty LINKED LIST
            temp->next=NULL;
            *list=temp;
        }else{           // insert to non-empty LINKED LIST
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
    }
}


void traverse(struct node *list){
    
    struct node *ptr=list;
    printf("||");
    while(ptr!=NULL){
        printf(" %d |",ptr->data);
        ptr=ptr->next;
    }
    printf("|\n");
}

float med_list(struct node* list, int n){
    int i;
    for(i=0;i<n/2-1;i++,list=list->next);
    if(n%2!=0)
        return((list->next)->data);
    else
        return((list->next->data + list->data)/2);
}

float mean_list(struct node *list, int n){
    float sum =0;
    int i;
    
    for(i=0;i<n;i++,sum+=list->data,list=list->next);

    return sum/n;
}

int main(){

    int n,i,j, a[n],e=0,o=0;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);

    printf("Enter the elements in the array :");
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]+a[j]-(a[j]=a[i]);
            }
        }
    }
    for( i=0;i<n;i++){
        if(a[i]%2==0){
            insert_end(&even,a[i]);
            e++;
        }else{
            insert_end(&odd,a[i]);
            o++;
        }
    }
    printf("\nEven LIST = ");
    traverse(even);
    printf("\nOdd LIST = ");
    traverse(odd);
        
    printf("\n\nMean of Even List = %f",mean_list(even,e));
    printf("\nMean of Odd List = %f",mean_list(odd,o));
    printf("\n\nMedian of Even List = %f",med_list(even,e));
    printf("\nMedian of Odd List = %f",med_list(odd,o));

    
}
