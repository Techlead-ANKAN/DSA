# include <stdio.h>
# include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *first, *last, *newnode, *temp;
	
	first = NULL;
	first = (struct node*)malloc(sizeof (struct node));
	first->data = 45;
	first->next=NULL;
	
	last = (struct node*)malloc(sizeof(struct node));
	last->data=55;
	last->next=NULL;
	first->next=last;
	
	printf("OLD LIST: \n");
	printf("%d %d\n",first->data, last->data);
	
	newnode = (struct node*)malloc(sizeof (struct node));
	printf("Enter data: ");
	scanf("%d", &newnode->data);
	
	printf("NEW LIST \n");
	first->next = newnode; 
	newnode->next= last;
	last = newnode;
	temp = first;
	
	while (temp!=0)
	{
		printf("%d ", temp->data);
		temp = temp -> next;
	}
	 
}
