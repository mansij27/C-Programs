// BINARY SEARCH TREE-- SEARCHING AND DELETION

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newnode;

struct node *create(int item){
    newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;
    
    return newnode;
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

    return root;
};

void in_order(struct node *root){
    if (root != NULL) {
        in_order(root->left);
        printf("%d ", root->data);
        in_order(root->right);
    }
}

//RECURSIVE FUNCTION
struct node *search(struct node *root, int data){
    if (root==NULL){
        return NULL;
    }
    if (data==root->data){
        return root;
    }
    else if(data< root->data){
        return search(root->left, data);
    }
    else{
        return search(root->right, data);
    }
}

// ITERATIVE FUNCTION
struct node *searchItr(struct node *root, int data){
    while (root!=NULL){
        if (data==root->data){
            return root;
        }
        else if(data< root->data){
            return root=root->left;
        }
        else{
            return root=root->right;
        }
    }
    return NULL;
};

struct node *inorderPredecessor(struct node *root){
    root= root->left;
    while (root->right != NULL){
        root= root->right;
    }
    return root;
}

struct node *delete(struct node *root, int value){
    struct node *iPre;

    if (root==NULL){
        return NULL;
    }
    if(root->left == NULL && root->right==NULL){
        free(root);
        return NULL;
    }
    // Searching for that node
    if (value< root->data){
       root->left= delete(root->left, value);
    }
    else if(value > root->data){
       root->right= delete(root->right, value);
    }
    // Deletion stratergy
    else{
        iPre= inorderPredecessor(root);
        root->data= iPre->data;
        root->left= delete(root->left, iPre->data);
    }
    return root;
};

int main(){
    struct node *root=NULL;
    root= insert(root, 7);
    root= insert(root, 5);
    root= insert(root, 6);
    root= insert(root, 3);
    root= insert(root, 1);
    root= insert(root, 4);
    root= insert(root, 8);    
    root= insert(root, 2);

    printf("\nIn order Traversal: ");
    in_order(root);

    delete(root, 2);
    printf("\n|Data is %d|", root->data);

    printf("\nIn order Traversal: ");
    in_order(root);

    struct node *n=search(root, 3);
    // struct node *n= searchItr(root, 1);
    if (n!=NULL){
        printf("\nElement found: %d", n->data);
    }
    else{
        printf("\nElement Not Found");
    }
    
    return 0;
}