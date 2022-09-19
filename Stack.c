// STACK USING ARRAYS

#include<stdio.h>

int stack[5];
int top=-1;
int x;

void push(){
    if (top ==4){
        printf("Stack is full.");
    }
    else{
        printf("Enter elements to push: ");
        scanf("%d", &x);
        top= top+1;
        stack[top]=x;
    }
}

void pop(){
    int item;
    item= stack[top];
    top= top-1;
    printf("Deleted item is %d", item);
}

void peek(){
    printf("Peek element is %d", stack[top]);
}

void display(){
    int i;
    if (top==-1){
        printf("Stack is empty");
    }
    else{
        printf("Stack elements are...\n");
        for ( i = top; i>=0; i--)
        {
            printf("Element %d\n", stack[i]);
        }
    }
}

void main(){
    int choice;
    do{
        printf("\nEnter your choice:\n Press 1 to push:\n Press 2 for pop:\n Press 3 for peek\n Press 4 for display");
        scanf("%d", &choice);

        switch (choice){
            case 1: 
            {
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                peek();
                break;
            }
            case 4:{
                display();
                break;
            }
            default:
            {
                printf("\nPlease, Enter a valid choice! ");
            }
        }
    } while(choice!=3);
}
