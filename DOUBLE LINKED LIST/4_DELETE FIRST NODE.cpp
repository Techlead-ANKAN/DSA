# include <stdio.h>
# include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *del_first(struct node *head)
{
	if (head == NULL)
		printf("Empty");
	else
	{
		struct node *temp;
		temp = head;
		head = head -> next;
		free(temp);
		temp = NULL;
		return head;
	}
}

int main()
{
	struct node *head, *one, *two, *three, *temp;
	head = NULL;
	one = (struct node*)malloc(sizeof(struct node));
	two = (struct node*)malloc(sizeof(struct node));
	three = (struct node*)malloc(sizeof(struct node));
	
	
	one -> data = 40;
	two -> data = 50;
	three -> data = 60;
	
	
	one -> next = two;
	two -> next = three;
	two -> prev = one;
	three -> prev = two;
	three -> next = NULL;
	
	
	head = one;;
	temp = head;
	
	printf("Double Linked List : ");
	while (temp !=0)
	{
		printf("%d ", temp -> data);
		temp = temp -> next;
	} 
	
	head = del_first(one);
	temp = head;
	
	printf("\nDeleting first node: ");
	
	while(temp -> next != NULL)
	{
		printf("%d ", temp -> data);
		temp = temp -> next;
	}
	printf("%d ", temp->data);
}


