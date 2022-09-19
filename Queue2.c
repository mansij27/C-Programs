// QUEUE USING LL
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear=NULL;
struct node *newnode;
struct node *temp;

void enqueue(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
    // Queue is empty
    if(front==NULL && rear==NULL){
        front= rear= newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue(){
    if (front==NULL && rear==NULL){
        printf("Underflow");
    }
    else{
        temp= front;
        front= front->next;
        printf("\nDeleted data is %d", temp->data);
        free(temp);
    }
}

void display(){
    temp=front;
        while(temp != NULL){
            printf("\nData is %d", temp->data);
            temp=temp->next;
        }
}

void peek(){
    printf("\nPeek element is %d", front->data);
}

void main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    peek();
    display();
}