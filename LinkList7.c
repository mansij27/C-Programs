// SINGLY LL DELETION FROM SPECIFIC POSITION
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start=NULL;
struct node *temp;
struct node *newnode;

void display(){
    temp= start;
        while (temp->next != NULL){
            printf("Data is %d\n", temp->data);     
            temp= temp->next; //Increment temp    
        }
        printf("Data is %d", temp->data);
}

void insert(){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
}

void main(){
    int n, i, pos;
    struct node *tail;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        insert();
        if (start== NULL){
            start=newnode;
            temp=newnode;
        }
        else{
        temp->next= newnode;    // creating link
        temp=newnode; //update temp
        }
    }
    display();

    printf("\nEnter the position which you want to delete: ");
    scanf("%d", &pos);
    printf("\n Deleting the node..");

    if (start==NULL){
        printf("LL is empty");
    }
    else{
        temp=start;
            for (i=1; i<pos-1; i++){
                temp=temp->next;
            }
        tail=temp->next; //storing the node we have to delete 
        temp->next=temp->next->next; //pointer changing
        printf("\nElement deleted is : %d\n",tail->data);
        tail->next=NULL; // breaking link
        free(tail);
        
        printf("\nData after deletion\n");
        display();
    }
}