# include <stdio.h>
# include <stdlib.h>
struct node
{
	int data;
	struct node  *next;
};
int main()
{
	struct node   *head, *current, *newnode, *temp;
	head = NULL;
	head = (struct node*) malloc(sizeof(struct node));
	head -> data = 40;
	head -> next = NULL;

	
	current = (struct node*) malloc(sizeof(struct node));
	current -> data = 50;
	current -> next = NULL;
	head -> next = current;


	printf("Old List: \n");
	printf("%d %d\n", head->data , current->data);
	
	newnode = (struct node*) malloc(sizeof(struct node));
	printf("Enter your data: ");
	scanf("%d", &newnode->data);
	
	printf("New List: \n");
	newnode -> next = head;  
	head = newnode;
	temp = head;
	while (temp!=0)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
}
