// Creation 

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *temp;
struct node *start=NULL;
void display(){
    temp=start;
    while(temp->next !=start){
        printf("Data is %d", temp->data);
        temp =temp->next;
        // printf("sS %d", temp);
    }
    printf("Last element %d", temp->data);
}
void main(){
    struct node *newnode, *tail;
 
    int choice=1;
    // struct node 
    while (choice==1){
        newnode= (struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d", &newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
    
        if (start== NULL){
            start=newnode;
            newnode->prev=tail;
            newnode->next=NULL;
        }
        else{
            temp=start;
            temp->next=newnode;
            newnode->prev=tail;
            newnode->next=start;
            tail=newnode;
            start->prev=newnode;
        }
    
    printf("Want to Enter more data? Press 1 otherwise press 0: ");
    scanf("%d", &choice);
    }

    display();
}