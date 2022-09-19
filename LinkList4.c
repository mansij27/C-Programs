// SINGLY LL INSERTION AT SPECIFIC POSITION
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
        while (temp != NULL){
            printf("Data is %d\n", temp->data);    
            temp= temp->next; //Increment temp     
        }
}

void insert(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
}

void main(){
    int n, i=1, pos;

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

    printf("Enter the position at which you want to insert? ");
    scanf("%d", &pos);

    insert(); //inserting node at that position

    //traverse till reach position
    temp= start;
    for (i=1; i<pos-1; i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

    display();
}