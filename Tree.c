// BINARY TREE LINKED REPRESENTATION

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(){
    printf("(Enter 0 for no node)\n");
    struct node *newnode;
    int x;
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &x);

    if(x==0){
        return 0;
    }
    newnode->data=x;
    printf("Enter left child of %d\n", x);
    newnode->left=create();
    printf("Enter right child of %d\n", x);
    newnode->right=create();

    return newnode;
}

void pre_order(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}

void post_order(struct node *root){
    if (root != NULL) {
        post_order(root->left);
        post_order(root->right);
        printf("%d ", root->data);
    }
}

void in_order(struct node *root){
    if (root != NULL) {
        in_order(root->left);
        printf("%d ", root->data);
        in_order(root->right);
    }
}

int main(){
    struct node *root=NULL;
    root= create();
    printf("\nPre order: ");
    pre_order(root);
    printf("\nPost order: ");
    post_order(root);
    printf("\nIn order: ");
    in_order(root);
}