// SINGLY LL SEARCH
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start=NULL;
struct node *temp;
struct node *newnode;
int i=1, item;
int result;

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

int search(){
    int i=1;
    temp=start;
        while(temp!=NULL){
            if (temp->data == item){
                printf("\nElement found at location %d", i);
                return 1;   
            }
            temp =temp->next; 
            i++;  
        }
}

void main(){
    int n;

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

    printf("Enter the element to be searched: ");
    scanf("%d", &item);

    if (start==NULL){
        printf("LL is empty");
    }
    else{        
        result=search(item);
        if(result==1)
        {
            printf("\nElement found");
        }
        else{
            printf("\nNot found");
        }
        }
}