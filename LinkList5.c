// SINGLY LL DELETION FROM END

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
    int n, i;
    struct node *prev;

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
    printf("\n Deleting last node..\n");

    if (start==NULL){
        printf("LL is empty");
    }
    else{
        temp=start;
        while(temp->next !=NULL){
            prev=temp;
            temp=temp->next;
        }

        prev->next=NULL;
        free(temp);

        printf("\nData after deletion\n");
        display();
    }
}