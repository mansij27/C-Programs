// Find length of Linked List/Count no of nodes

#include <stdio.h>
#include <stdlib.h>

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
    
void count_of_nodes(struct node *start){
    int count=0;
    while(temp != NULL){         
        temp= temp->next;
        count++ ;
    }
    printf("Count of nodes %d", count);
}

void main(){
    int i,pos, n;
    int count=0;

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

    temp= start;
    if(start=NULL){
        printf("List is empty");
    }
    else{
        count_of_nodes(start);  
    }
}