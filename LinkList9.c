// SINGLY LL SORTING
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start= NULL;
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

void sort(){
    struct node *temp1, *temp2, *t;
    int n, k, i, j;
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

    for (i = n - 2; i >= 0; i--){
        temp1 = start;
        temp2 = temp1->next;
        for (j = 0; j <= i; j++){
            if (temp1->data > temp2->data){ //swapping values
                k = temp1->data;
                temp1->data = temp2->data;
                temp2->data = k;
            }
            temp1 = temp2; //incrementing temp when false condition
            temp2 = temp2->next;
        }
    }

    printf("Sorted order is: \n");
    t = start;
    while (t != NULL){
        printf("%d\t", t->data);
        t = t->next;
    }
}

void main(){
    display();
    sort();
}