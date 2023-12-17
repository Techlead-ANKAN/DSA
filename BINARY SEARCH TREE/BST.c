    # include <stdio.h>
    # include <stdlib.h>


    struct node 
    {
        int data;
        struct node *left;
        struct node *right;
    };

    //create newnode
    struct node *create_node(int value)
    {
        struct node *temp = malloc(sizeof(struct node));
        temp -> data = value;
        temp -> left = temp -> right = NULL;
    }


    // inorder traversal
    void inorder_traversal(struct node *root)
    {
        if (root == NULL)
            return ;
        
        else
        {
            inorder_traversal(root -> left);
            printf("%d ", root -> data);
            inorder_traversal(root -> right);
        }
    }


    // insert node
    struct node* insert_node(struct node *root, int value)
    {
        if (root == NULL)
        {
            return create_node(value);
        }
        else if (value > root -> data) 
        {
            root -> right = insert_node(root -> right, value);
        }
        else 
        {
            root -> left = insert_node(root -> left, value);
        }
        return root;
    }

    // search node
    struct node* search_node(struct node *root, int value)
    {
        if (root -> data == value)
            return root;

        else if (value < root -> data)
            return search_node(root -> left, value);
        
        else
            return search_node(root -> right, value);
    }

    int get_right_min(struct node *root)
    {
        struct node *temp;
        //  min value should be present in the left most node
        while(temp -> left != NULL)
        {
            temp = temp -> left;
        }

        return temp -> data;
    }

    // Delete node
    struct node *delete_node(struct node *root, int value)
    {
        // base case where root is null
        if(root == NULL)
            return NULL;
        
        // when value is > root -> data, it must be present on the right subtree.
        if (value > root -> data)
        {
            return delete_node(root -> right, value);
        }

        // when value is > root -> data, it must be present on the left subtree
        else if(value < root -> data)
        {
            return delete_node(root -> left, value);
        }

        // when root -> data == value
        else
        {
            // Case 1: Leaf node. Both left and right reference is NULL
            // replace the node with NULL by returning NULL to the calling pointer.
            // free the node 
            if (root -> left == NULL && root -> right == NULL)
            {
                free(root);
                return NULL;
            }

            // Case 2: Node has right child.
            // replace the root node with root->right and free the right node
            else if(root -> left == NULL)
            {
                struct node *temp;
                temp = root -> right;
                free(root);
                return temp;
            }

            // Case 3: Node has left child.
            // replace the node with root->left and free the left node
            else if(root -> right == NULL)
            {
                struct node *temp;
                temp = root -> left;
                free(root);
                return temp;
            }

            // Case 4: Node has both left and right children.
            // Find the min value in the right subtree
            // replace node value with min.
            // And again call the remove function to delete the node which has the min value.
            // Since we find the min value from the right subtree call the remove function with root->right.
            else
            {
                int rightmin = get_right_min(root -> right);
                root -> data = rightmin;
                root -> right = delete_node(root -> right, rightmin);
            }
        }
        return root;
    }

    int main()
    {
        struct node *root = NULL;

        root = insert_node(root, 10);
        insert_node(root, 30);
        insert_node(root, 1);
        insert_node(root, 11);
        insert_node(root, 21);
        insert_node(root, 41);
        insert_node(root, 22);
        insert_node(root, 2);
        

        printf("Inorder Traversal: -");
        inorder_traversal(root);

        int search_key = 2;
        
        if (search_node(root, search_key) == NULL)
        {
            printf("\n%d not found\n",search_key);
        }
        else    
        {
            printf("\n%d found\n", search_key);
        }

        int del_val = 41;
        root = delete_node(root, del_val);

        printf("Inorder Traversal after deleting %d: - ", del_val);
        inorder_traversal(root);
    }