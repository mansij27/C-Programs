// QUEUE USING ARRAYS
#include<stdio.h>

int queue[10];
int front, rear=-1;

void enqueue(int x){
    //if queue is full and x =no. of elements
    if (queue[rear]== x-1){ 
        printf("Overflow");
    }
    //if empty
    else if (front == -1 && rear == -1){ 
        front= 0;
        rear= 0;
        queue[rear]=x;
    }
    // point to 1st index
    else{
        rear= rear +1; 
        queue[rear]=x;
    }
}

void dequeue(){
    //Nothing to delete
    if (rear== -1 && front== -1){ 
        printf("Underflow");
    }
    // Check if queue contain one element
    else if(front== rear){
        front= -1;
        rear= -1;
    }
    else{
        printf("\nDeleted elements is %d", queue[front]);
        front= front +1;
    }
}

void display(){
    int i;
    for(i=front;i<=rear; i++){
        printf("\nData is %d", queue[i]);
    }
}

void peek(){
    printf("\nPeek element is %d", queue[front]);
}

void main(){
    enqueue(2);
    enqueue(5);
    enqueue(11);
    enqueue(7);
    enqueue(8); //not printed?
    enqueue(3);
    enqueue(1);
    enqueue(5);
    enqueue(6); //not printed?
    enqueue(7);
    enqueue(9);
    display();
    dequeue();
    peek();
}