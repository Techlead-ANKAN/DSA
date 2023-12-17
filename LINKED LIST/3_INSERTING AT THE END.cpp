# include <stdio.h>
# include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *sec, *last, *newnode, *t, *t1;
    
    head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head -> next = NULL;
    head -> data = 10;
    
    sec = (struct node*)malloc(sizeof(struct node));
    sec -> next = NULL;
    sec -> data = 20;
    head -> next = sec;
    
    last = (struct node*)malloc(sizeof(struct node));
    last -> next = NULL;
    last -> data = 30;
    sec -> next = last;
    
    printf("OLD LIST: %d %d %d\n", head-> data, sec->data, last->data);
    
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter newnode data: ");
    scanf("%d", &newnode->data);
    newnode -> next = NULL;
    
    t = head;
    
    while (t->next!=0)
    {
        t = t -> next;
    }
    t -> next = newnode;
    
    t1 = head;
    printf("newnode LIST: ");
    while (t1!=0)
    {
        printf("%d ", t1 -> data);
        t1 = t1 -> next;
    }
}
