// SINGLY LL INSERT SUCH SO LIST REMAIN SORTED 

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

void sorted_insert(){
 struct node *temp = NULL;
 struct node *newnode,*head;
 {
 newnode = (struct node *)malloc(sizeof(struct node));
 printf("\nEnter data:");
 scanf("%d", &newnode->data);
 if (head->data >= newnode->data)
 {
 newnode->next = head;
 head = newnode;
 }
 else
 {
 temp = head;
 while (temp->next->data <= newnode->data)
 {
 temp = temp->next;
 }
 newnode->next = temp->next;
 temp->next = newnode;
 printf("Node Inserted!!");
 }
 }
}

void main(){
    display();
    sorted_insert();
    
}