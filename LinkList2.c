#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node *newnode;
struct node *temp;
struct node *start=NULL;

void insert(){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
}

void display(){
    temp=start;
        while (temp->next!=NULL)
        {
            printf("Data is %d\n", temp->data);
            temp=temp->next;
        }
        printf("Data is %d", temp->data);
}

void insert_begin(){
    newnode = (struct node *)malloc(sizeof(struct node)); //Memory for newmode at position

    printf("Enter Data to be inserted at the beginning: ");
    scanf("%d", &newnode->data);
    temp=start; //storing start data in temp
    start=newnode; //updating start
    newnode->next=temp; //creating new link
}

void main(){
    int i, n;
    printf("Enter the no.of nodes");
    scanf("%d", &n);

    for (i=1; i<=n; i++){
        insert();
        if(start== NULL){
            start=newnode;
            temp=newnode;
        }
        else{
            temp->next= newnode;    // creating link
            temp=newnode; //update temp
        }
    }
    insert_begin();

    printf("After insertion\n");
    display();
}    