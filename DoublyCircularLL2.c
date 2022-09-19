// Insertion at the beginning

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void main(){
    struct node *newnode, *tail, *start=NULL, *temp;
    int choice;

    while(choice =1){
        newnode= (struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d", &newnode->data);

        newnode->next=NULL;
        newnode->prev=NULL;

        if (start==NULL){
            start=newnode;
            newnode->prev=tail;
            newnode->next=NULL;
        }
        else{
            newnode->next=start;
            start->prev=newnode;
            tail->next=newnode;
            newnode->prev=tail;
            start=newnode;
        }

    printf("Want to Enter more data? Press 1 otherwise press 0: ");
    scanf("%d", &choice);
    }
    
    temp=start;
    while(temp->next!=start){
        printf("Data is %d", temp->data);
        temp=temp->next;
    }
}
