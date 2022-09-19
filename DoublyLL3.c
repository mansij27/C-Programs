//  DOUBLY LINK LIST DELETE AT LAST AND SPECIFIC POSITION AND FIND LENGTH
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
struct node *newnode;

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

void delete_last(){
 struct node *temp;
 if (start == NULL)
 printf("\nList is empty\n");
 temp = start;
 while (temp->next != NULL)
 temp = temp->next;
 if (start->next == NULL)
 start = NULL;
 else
 {
 temp->prev->next = NULL;
 free(temp);
 }
}

void delete_location(){
 int pos, i = 1;
 struct node *temp, *p;
 
 temp = start;
 // If DLL is empty
 if (start == NULL)
 printf("\nList is empty\n");
 // Otherwise
 else
 {
 // pos to be deleted
 printf("\nEnter position : ");
 scanf("%d", &pos);
 // If the pos is the first node
 if (pos == 1)
 {
 p = start;
 start = start->next;
 if (start != NULL)
 {
 start->prev = NULL;
 }
 free(p);
 return;
 }
 // Traverse till pos
 while (i < pos - 1)
 {
 temp = temp->next;
 i++;
 }
 // Change Links
 p = temp->next;
 if (p->next != NULL)
 p->next->prev = temp;
 temp->next = p->next;
 // Free memory
 free(p);
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

void FindLength(){
 int len = 0;
 while(start != NULL){
 start=start->next;
 len++;
 }
 printf("Linked List length: %d\n", len);
}

void main(){
    int i, n;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        insert_last();
    }
    printf("Deleting last node..\n");
    delete_last();
    display();
    
    delete_location();
    display();
    FindLength();
}
