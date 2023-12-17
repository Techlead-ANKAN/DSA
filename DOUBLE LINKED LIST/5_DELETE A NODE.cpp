# include <stdio.h>
# include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
	struct node *prev;
};


int main()
{
	struct node *head, *one, *two, *three, *four, *temp;
	head = NULL;
	one = (struct node*)malloc(sizeof(struct node));
	two = (struct node*)malloc(sizeof(struct node));
	three = (struct node*)malloc(sizeof(struct node));
	four = (struct node*)malloc(sizeof(struct node));
	
	one -> data = 40;
	two -> data = 50;
	three -> data = 60;
	four -> data = 70;
	
	
	one -> next = two;
	two -> next = three;
	two -> prev = one;
	three -> prev = two;
	three -> next = four;
	four -> prev = three;
	four -> next = NULL;
	
	
	head = one;;
	temp = head;
	
	printf("Double Linked List : ");
	while (temp !=0)
	{
		printf("%d ", temp -> data);
		temp = temp -> next;
	} 
	
	two -> next = four;
	four -> prev = two;
	
	head = one;
	temp = head;
	
	printf("\nDeleting first node: ");
	
	while(temp -> next != NULL)
	{
		printf("%d ", temp -> data);
		temp = temp -> next;
	}
	printf("%d ", temp->data);
}


