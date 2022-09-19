//  DOUBLY LINK LIST SEARCH, SORT AND REVERSE
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
            printf("\nData is %d", temp->data);
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

void search(){
 struct node *ptr;
 int item, i = 0, flag;
 ptr = start;
 if (ptr == NULL)
 {
 printf("\nEmpty List\n");
 }
 else
 {
 printf("\nEnter item which you want to search?\n");
 scanf("%d", &item);
 while (ptr != NULL)
 {
 if (ptr->data == item)
 {
 printf("\nitem found at location %d \n", i + 1);
 flag = 0;
 break;
 }
 else
 {
 flag = 1;
 }
 i++;
 ptr = ptr->next;
 }
 if (flag == 1)
 {
 printf("\nItem not found\n");
 }
 }
}

void sort(){
 struct node *i, *j,*t;
 int num;
 for (i = start; i->next != NULL; i = i->next)
 {
 for (j = i->next; j != NULL; j = j->next)
 {
 if (i->data > j->data)
 {
 num = j->data;
 j->data = i->data;
 i->data = num;
 }
 }
 }
 printf("Sorted order is: \n");
 t = start;
 while (t != NULL)
 {
 printf("%d\t", t->data);
 t = t->next;
 }
}

void reverse(){
 int size;
 if (size < 2)
 {
 return;
 }
 struct node *present = start;
 struct node *previous = NULL;
 struct node *nextnode = present->next;
 while (present != NULL)
 {
 present->next = previous;
 present->prev = nextnode;
 previous = present;
 present = nextnode;
 if (nextnode != NULL)
 {
 nextnode = nextnode->next;
 }
 }
 start = previous;
 display();
}

void main(){
    int i, n;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        insert_last();
    }
    display();
    search();
    sort();
    printf("\nReversed list..");
    reverse();
}