// SINGLY LL DELETION FROM START

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start=NULL;
struct node *temp;

void display(){
    temp= start;
        while (temp->next != NULL){
            printf("Data is %d\n", temp->data); 
            temp= temp->next; //Increment temp        
        }
        printf("Data is %d", temp->data);
}

void main(){
    int n, i;
    struct node *newnode;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter Data: ");
        scanf("%d", &newnode->data);

        newnode->next=NULL;
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

    printf("\n Deleting first node..\n");
    
    temp=start;
    start=temp->next;
    free(temp);

    printf("\nAfter Deletion\n");

    display();
}