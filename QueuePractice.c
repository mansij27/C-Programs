// Program to implement Queue using Stack in C.  
#include<stdio.h>  
#define N 5  
int stack1[5], stack2[5]; // declaration of two stacks  
// declaration of top variables.  
int top1=-1, top2=-1;   
int count=0;  
// inserting the elements in stack1.  
void push1(int data)  
{  
// Condition to check whether the stack1 is full or not.    
 if(top1==N-1)  
{  
   printf("\n Stack is overflow...");  
}  
else  
{  
   top1++;   // Incrementing the value of top1  
   stack1[top1]=data;  // pushing the data into stack1  
}  
}  
// Removing the elements from the stack1.  
int pop1()  
{  
// Condition to check whether the stack1 is empty or not.    
if(top1==-1)  
{  
   printf("\nStack is empty..");  
}  
else  
{  
   int a=stack1[top1];  // Assigning the topmost value of stack1 to 'a' variable.   
   top1--;  // decrementing the value of top1.  
   return a;   
}  
}   
// pushing the data into the stack2.  
void push2(int x)  
{  
//  Condition to check whether the stack2 is full or not  
if(top2==N-1)  
{  
   printf("\nStack is full..");  
}  
else  
{  
    top2++;   // incrementing the value of top2.  
    stack2[top2]=x;  // assigning the 'x' value to the Stack2  
  
}  
}   
// Removing the elements from the Stack2  
int pop2()  
{  
   int element = stack2[top2];  // assigning the topmost value to element  
   top2--;  // decrement the value of top2  
   return element;  
}   
void enqueue(int x)  
{  
    push1(x);  
    count++;  
}  
void dequeue()  
{  
   if((top1==-1) && (top2==-1))  
{  
   printf("\nQueue is empty");  
}  
else  {  
  for(int i=0;i<count;i++)  
  {  
     int element = pop1();  
     push2(element);  
  }  
int b= pop2();  
printf("\nThe dequeued element is %d", b);  
printf("\n");  
count--;  
for(int i=0;i<count;i++)  
{  
   int a = pop2();  
   push1(a);   
}  
}}   
void display()  
{  
   for(int i=0;i<=top1;i++)  
  {  
     printf("%d , ", stack1[i]);  
  }  
}  
void main()  
{  
   enqueue(10);  
   enqueue(20);  
   enqueue(30);  
   dequeue();  
   enqueue(40);  
   display();  
}  
