// CIRCULAR QUEUE USInG ARRAY
#include<stdio.h>

int queue[10];
int front, rear=-1;
int n;

void enqueue(int x){
    // Empty
    if (front==-1 && rear==-1){
        front=0;
        rear=0;
        queue[rear]=x;
    }
    else if((rear+1) % n==front){
        printf("Overflow");
    }
    else{
        rear=(rear+1)%n;
        queue[rear]= x;
    }
}

void dequeue(){
    // If empty
    if (front==-1 && rear==-1){
        printf("Underflow");
    }
    // if only one element
    else if(front==rear){
        front=rear-1;
    }
    else{
        printf("Deleted Element is %d", queue[front]);
        front=(front+1)%n;
    }
}

void display(){
    int i= front;
        while(i!=rear){
            printf("\nData is %d", queue[i]);
            i=(i+1)%n;
        }
        printf("Data is %d", queue[i]);
}

void peek(){
    printf("\nPeek element is %d", queue[front]);
}

void main(){
    enqueue(4);
    enqueue(6);
    enqueue(7);
    enqueue(9);
    // display();
    dequeue();
    peek();
    display();
}