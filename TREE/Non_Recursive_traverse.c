// # include <stdio.h>
// # include <stdlib.h>

// struct node 
// {
//     char data;
//     struct node *left;
//     struct node *right;
// };

// void inorder_traverse(struct node *root)
// {   
//     if (root == NULL)
//         return;
//     else
//     {
//         inorder_traverse(root -> left);
//         printf("%d -> ", root -> data);
//         inorder_traverse(root -> right);
//     }
// }

// int main()
// {
//     struct node *A, *B, *C, *D, *E, *F;

//     A = (struct node*)malloc(sizeof(struct node));
//     A -> data = 'A';
//     A -> left = B;
//     A -> right = C;

//     B = (struct node*)malloc(sizeof(struct node));
//     B -> data = 'B';
//     B -> left = D;
//     B -> right = E;

//     C = (struct node*)malloc(sizeof(struct node));
//     C -> data = 'C';
//     C -> left = NULL;
//     C -> right = NULL;

//     D = (struct node*)malloc(sizeof(struct node));
//     D -> data = 'D';
//     D -> left = NULL;
//     D -> right = NULL;

//     E = (struct node*)malloc(sizeof(struct node));
//     E -> data = 'E';
//     E -> left = F;
//     E -> right = NULL;

//     F = (struct node*)malloc(sizeof(struct node));
//     F -> data = 'F';
//     F -> left = NULL;
//     F -> right = NULL;


//     inorder_traverse(A);
// }


// Tree traversal in C

#include <stdio.h>
#include <stdlib.h>

struct node {
  char data;;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%c ->", root->data);
  inorderTraversal(root->right);
}

// preorderTraversal traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%c ->", root->data);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// postorderTraversal traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%c ->", root->data);
}


int main() {
  struct node *A, *B, *C, *D, *E, *F;

    A = (struct node*)malloc(sizeof(struct node));
    A -> data = 'A';
    A -> left = B;
    A -> right = C;

    B = (struct node*)malloc(sizeof(struct node));
    B -> data = 'B';
    B -> left = D;
    B -> right = E;

    C = (struct node*)malloc(sizeof(struct node));
    C -> data = 'C';
    C -> left = NULL;
    C -> right = NULL;

    D = (struct node*)malloc(sizeof(struct node));
    D -> data = 'D';
    D -> left = NULL;
    D -> right = NULL;

    E = (struct node*)malloc(sizeof(struct node));
    E -> data = 'E';
    E -> left = F;
    E -> right = NULL;

    F = (struct node*)malloc(sizeof(struct node));
    F -> data = 'F';
    F -> left = NULL;
    F -> right = NULL;


  printf("Inorder traversal \n");
  inorderTraversal(A);

  printf("\nPreorder traversal \n");
  preorderTraversal(A);

  printf("\nPostorder traversal \n");
  postorderTraversal(A);
}