//  DOUBLY LIST LIST CREATION OR INSERT AT BEGINNING AND AT SPECIFIC LOCATION
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *start=NULL;
struct node *temp;
struct node *newnode;

void display(){
    if (start == NULL){
    printf("\nList is empty\n");
    return;
    }
    temp= start;
        while (temp != NULL){
            printf("Data is %d\n", temp->data);
            temp= temp->next; //Increment temp         
        }
}

void insert_begin(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d", &newnode->data);
  
    newnode->prev=NULL;
    newnode->next=start;
    start= newnode;
}

void insert_location(){
    int data, pos, i = 1;
    struct node *temp, *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->prev = NULL;

    printf("\nEnter pos : ");
    scanf("%d", &pos);
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    newnode->data = data;
    temp = start;

    if (start == NULL){
        start = newnode;
        newnode->prev = NULL;
        newnode->next = NULL;
    }
    else if (pos == 1){
        newnode->next = start;
        newnode->next->prev = newnode;
        newnode->prev = NULL;
        start = newnode;
    }

    else{
    while (i < pos - 1){
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next = newnode;
    temp->next->prev = newnode;
    }
}

void main(){
    int i, n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        insert_begin();
    }
    insert_location();
    display();
}