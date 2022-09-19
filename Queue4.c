// CIRCULAR QUEUE USING LL

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front;
struct  node *rear=NULL;
struct node *newnode;
struct node *temp;

void enqueue(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
    // only one element
    if(front==NULL && rear==NULL){
        front= rear= newnode;
        rear->next=front;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void dequeue(){
    temp=front;
    if (front==NULL && rear==NULL){
        printf("Underflow");
    }
    else if (front==rear){ //only 1 element 
        front=rear=NULL;
        free(temp);
    }
    else{
        printf("Deleted element is %d\n", temp->data);
        front=front->next;
        rear->next=front;
        free(temp);
    }
}

void display(){
    temp=front;
    while(temp->next!=front){
        printf("Data is %d\n", temp->data);
        temp=temp->next;
    }
    printf("Data is %d\n", temp->data);
}

void peek(){
    printf("\nPeek element is %d\n", front->data);
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