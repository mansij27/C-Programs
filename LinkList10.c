// SINGLY LL REVERESE

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
    temp=start;
    while(temp != NULL){
        printf("\nData is %d", temp->data);
        temp=temp->next;
    }
}

void insert(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
}

void reverse(){
    struct node *prev;

    if(start != NULL){
        prev= start; //pointing to first node
        temp= start->next; //pointing to 2nd node
        start= start->next; //incrementing start
        prev->next= NULL; // First node as last node 

        while(start != NULL){
            start = temp->next; //pointing to 3rd node
            temp->next = prev;
            prev = temp;
            temp = start;
        }
        start = prev; // Make last node as head
    }
}

void main(){
    int i,n;

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

    printf("\nReversing the List..\n");
    reverse();

    printf("\nList after reverse");
    display();
}