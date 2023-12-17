# include <stdio.h>
# include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};


int main()
{
	struct node *head, *second, *last, *ptr;
	
	head = NULL;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 88;
	head->next = NULL;
	
	
	last = (struct node*)malloc(sizeof(struct node));
	last -> data = 99;
	last->next=NULL;
	head->next=last;
	
	printf("Old LIST: %d %d %d\n", head->data,last->data);
	

	ptr = head;
	
	printf("NEW LIST: ");
	while(ptr!=0)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
}
