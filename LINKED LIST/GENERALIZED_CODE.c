# include <stdio.h>
# include <stdlib.h>

struct node 
{
    struct node *next;
    int data;
};

// node creation
struct node *create_node(int val)
{
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp -> next =  NULL;
    temp -> data = val;
}

// Insert at begin
struct node *insert_first(struct node *head, int val)
{
    struct node *newnode = create_node(val);
    newnode -> next = head;
    head = newnode;
}

// Insert at end
struct node *insert_last(struct node *head, int val)
{
    struct node * newnode = create_node(val);

    struct node * temp;

    temp = head;

    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }

    temp -> next = newnode;
}


// delete head
struct node *delete_head(struct node *head)
{
    if (head == NULL)
    {
        printf("Empty Linked List\n");
    }
    else
    {
        struct node * temp;
        temp = head;
        head = head -> next;
        free(temp);
        temp = NULL;
        return head;
    }

}

// delete last node
struct node * delete_lastnode(struct node *head)
{
    if (head == NULL)
    {
        printf("Empty Linked List\n");
    }
    else
    {
        struct node * temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp);
        temp = NULL;
        return temp;
    }
}

