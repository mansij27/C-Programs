// Insert at specific position

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void main(){
    struct node *newnode, *start=NULL, *tail;
    struct node *temp;
    int choice=1;
    int pos, i=1;

    printf("Enter the position at which you want to insert");
    scanf("%d", &pos);
}