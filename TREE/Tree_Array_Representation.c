// Representation of tree in an array

# include <stdio.h>
# include <stdlib.h>

struct node {
    int data; 
    struct node *left;
    struct node *right;
};

void inorder_traverse(struct node *node)
{
    if (node == NULL)
        return;
    else
    {
    inorder_traverse(node->left);
    printf(" %d", node->data);
    inorder_traverse(node -> right);
    }

}

void preorder_traverse(struct node *node)
{   
    if (node == NULL)
        return;
    else
    {
    printf(" %d", node -> data);
    preorder_traverse(node -> left);
    preorder_traverse(node -> right);
    }

}

void postorder_traverse(struct node *node)
{
    if (node == NULL)
        return;
    else
    {
    postorder_traverse(node -> left);
    postorder_traverse(node -> right);
    printf(" %d", node -> data);
    }

}

int main()
{
    struct node *root, *n1, *n2;
    root = (struct node*)malloc(sizeof(struct node));
    n1 = (struct node*)malloc(sizeof(struct node));
    n2 = (struct node*)malloc(sizeof(struct node));


    root -> data = 10;
    n1 -> data = 20;
    n2 -> data = 30;
    
    
    root -> left = n1;
    root -> right = n2;

    n1 -> left = NULL;
    n1 -> right = NULL;

    n2 -> right = NULL;
    n2 -> left = NULL;

    printf("Pre-Order Traversal: - \n");
    preorder_traverse(root);
    printf("\n");

    printf("In-Order Traversal: - \n");
    inorder_traverse(root);
    printf("\n");

    printf("Post-Order Traversal: - \n");
    postorder_traverse(root);
    printf("\n");


}


