// STACK USING LL

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *newnode;
struct node *top=NULL;
struct node *temp;

void push(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next=top;
    top=newnode;
}

void pop(){
    if(top==NULL){
        printf("Stack empty");
    }
    else{
        printf("Deleted element %d\n", top->data);
        temp=top;
        top=temp->next;
        free(temp);
    }
}

void peek(){
    printf("Peek element %d\n", top->data);
}

void display(){
    temp=top;
    while (temp!=NULL){
        printf("Data is %d\n", temp->data);
        temp=temp->next;
    }   
}

void main(){
    push();
    push();
    push();
    pop();
    peek();
    display();
}