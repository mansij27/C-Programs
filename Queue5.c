// QUEUE USING STACK
#include<stdio.h>

#define n 5
int q[5];
int stack1[n], stack2[n];
int top1, top2=-1;
int count=0;

void push1(int data){
    if(top1==n-1){
        printf("Stack overflow");
        // count--;
    }
    else{
        top1++; //increasing top size
        stack1[top1]= data; //data entered into stack
    }
}

void push2(int data)  {  
    if(top2==n-1){  
        printf("\nStack is full..");  
    }  
    else  {  
        top2++;  
        stack2[top2]=data;  // assigning the 'x' value to the Stack2  
    }  
}  

int pop1(){
    return stack1[top1--];
}

int pop2(){
    return stack2[top2--];
}

void enqueue(int x){
    push1(x);
    count++;
}

void dequeue(){
    if ((top1==-1) && (top2==-1)){
        printf("Queue is empty");
    }
    else{
        for(int i=0;i<count;i++) {  
            int a = pop1();  //storing top value of stack1 in element variable 'a' and popping it
            push2(a);  //pushing element into stack2
        }
        int b=pop2(); //storing stack2 top value into 'b' variable 
        printf("Deleted element is %d\n", b);
        count--; 
    // popping rest of the stack2 elements into stack1
    for(int i=0;i<count;i++) {  
        int a = pop2();  
        push1(a);   
        }  
    }
}

void display(){
    for(int i=1;i<=top1;i++) {  
        printf("Data is %d\n", stack1[i]);  
    }  
}

void main(){
    enqueue(2);
    enqueue(3);
    enqueue(5);
    dequeue();
    // dequeue();
    enqueue(7);
    display();
}