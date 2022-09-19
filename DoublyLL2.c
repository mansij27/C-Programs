//  DOUBLY LINK LIST INSERT AT END AND DELETION FROM BEGINNING
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *start=NULL;
struct node *temp;
struct node *temp2;

void display(){
    if (start == NULL){
    printf("\nList is empty\n");
    return;
    }
    temp= start;
        while (temp != NULL){
            printf("Data is %d\n", temp->data);
            temp= temp->next; //Increment temp         
        }
}
void insert_last(){
 int data;
 temp = (struct node *)malloc(sizeof(struct node));
 temp->prev = NULL;
 temp->next = NULL;
 printf("Enter data to be inserted:");
 scanf("%d", &data);
 temp->data = data;
 temp->next = NULL;
 temp2 = start;
 // If start is NULL
 if (start == NULL)
 {
 start = temp;
 }
 // Changes Links
 else
 {
 while (temp2->next != NULL)
 temp2 = temp2->next;
 temp->prev = temp2;
 temp2->next = temp;
 }
}

void delete_begin(){
 struct node *temp;
 if (start == NULL)
 printf("\nList is empty\n");
 else
 {
 temp = start;
 start = start->next;
 if (start != NULL)
 start->prev = NULL;
 free(temp);
 }
}

void main(){
    int i, n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        insert_last();
    }
    printf("After deletion at begin..")
    delete_begin();
    display();
}