// DOUBLE ENDED QUEUE

#include<stdio.h>
#define size 5  
int deque[size];
int front=-1, rear=-1;

void enqueueFront(int x){
    if ((front==0 && rear==size-1) || (front==rear+1))  {    
        printf("Overflow");    
    }
    else if(front==-1 && rear==-1){ //empty
        front=rear=0;
        deque[front]=x;
    }
    else if(front==0) {   //bounding condition
        front=size-1;    
        deque[front]=x;    
    }
    else {    
        front=front-1;    
        deque[front]=x;    
    }    
}

void enqueueRear(int x){
    if((front==0 && rear==size-1) || (front==rear+1)){    
        printf("Overflow");    
    }    
    else if((front==-1) && (rear==-1)){   //first element entered 
        rear=0;    
        deque[rear]=x;    
    }    
    else if(rear==size-1){    //when at last position
        rear=0;    
        deque[rear]=x;    
    }    
    else{    
        rear++;    
        deque[rear]=x;    
    }
}

void display(){
    int i=front;    
    printf("\nElements in a deque are: ");    
        
    while(i!=rear){    
        printf("%d ",deque[i]);    
        i=(i+1)%size;    
    }    
    printf("%d",deque[rear]);    
}

void getFront(){
    if (front==-1 && rear==-1){
        printf("DEque is empty");
    }
    else{
        printf("Element at front %d\n", deque[front]);
    }
}

void getRear(){
    if (front==-1 && rear==-1){
        printf("DEque is empty");
    }
    else{
        printf("Element at rear %d\n", deque[rear]);
    }
}

void dequeFront(){    
    if((front==-1) && (rear==-1)){    
        printf("Deque is empty");    
    }    
    else if(front==rear){    
        printf("\nThe deleted element is %d", deque[front]);    
        front=-1;    
        rear=-1;        
    }    
    else if(front==(size-1)){    
        printf("\nThe deleted element is %d", deque[front]);    
        front=0;    
    }    
    else{    
        printf("\nThe deleted element is %d", deque[front]);    
        front=front+1;    
    }    
}    

void dequeRear(){ 
    if((front==-1) && (rear==-1)){    
        printf("Deque is empty");    
    }    
    else if(front==rear){    
        printf("\nThe deleted element is %d", deque[rear]);    
        front=-1;    
        rear=-1;        
    }
    else if(rear==0){    
        printf("\nThe deleted element is %d", deque[rear]);    
        rear=size-1;    
    }    
    else{    
        printf("\nThe deleted element is %d", deque[rear]);    
        rear=rear-1;    
    }    
}

void main(){
    enqueueFront(2);
    enqueueFront(3);
    enqueueFront(7);
    enqueueRear(5);
    enqueueRear(6);
    getFront();
    getRear();
    dequeFront();
    dequeRear();
    display();
    
}