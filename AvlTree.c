#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int max(int a, int b){
    return a>b ?a:b;
}

int height(struct node *n){
    if (n==NULL){
        return 0;
    }
    return n->height;
}

struct node *create(int item){
    struct node *newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->height=1;
    
    return newnode;
};

int BalanceFactor(struct node *n){
    if (n==NULL){
        return 0;
    }
    return height(n->left) - height(n->right);
}

struct node *RightRotate(struct node *y){
    struct node *x = y->left;
    struct node *t2= x->right;

    x->right= y;
    y->left=t2;

    y->height=max(height(y->right), height(y->left)) +1;
    x->height=max(height(x->right), height(x->left)) +1;

    return x;
};

struct node *LeftRotate(struct node *x){
    struct node *y = x->right;
    struct node *t2= y->left;

    y->left=x;
    x->right= t2;

    y->height=max(height(y->right), height(y->left)) +1;
    x->height=max(height(x->right), height(x->left)) +1;

    return y;
};

struct node *insert(struct node *root, int data){
    if(root==NULL){
        return create(data);
    }
    if (data < root->data ){
        root->left=insert(root->left, data);
    }
    else{
        root->right=insert(root->right, data);
    }

    root->height= 1+max(height(root->left), height(root->right));
    int bf= BalanceFactor(root);

    // LEFT-LEFT ROTATE
    if (bf>1 && data < root->left->data){
        return RightRotate(root);
    }
    // RIGHT RIGHT ROTATE
    if (bf<-1 && data < root->right->data){
        return LeftRotate(root);
    }
    // LEFT RIGHT ROTATE
    if (bf>1 && data > root->left->data){
        root->left= LeftRotate(root->left);
        return RightRotate(root);
    }
    // RIGHT LEFT ROTATE
    if (bf<-1 && data < root->right->data){
        root->right= RightRotate(root->right);
        return LeftRotate(root);
    }
    return root;
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

    root= insert(root, 7);
    root=insert(root,4);
    root=insert(root, 9);
    root=insert(root, 5);
    root=insert(root, 6);
    root=insert(root, 8);
    root=insert(root, 1);

    printf("\nIn order Traversal: ");
    in_order(root);

    return 0;
}
