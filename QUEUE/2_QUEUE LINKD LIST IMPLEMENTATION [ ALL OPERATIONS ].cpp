# include <stdio.h>
# include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int isempty()
{
	if (front == NULL)
		return 1;
	else
		return 0;
}

void enqueue(int data)
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = data;	
	if (isempty())
	{
		front = newnode;
		front -> next = rear;
		rear = newnode;
	}
	else
	{
		rear -> next = newnode;
		rear = newnode;
	}
	printf("(%d) --> Enqueued\n", newnode -> data);
}

void dequeue()
{
	if (isempty())
	{
		printf("Queue is empty.");
	}
	else
	{
		printf("\n(%d) --> Dequeued", front -> data);
		front = front -> next;
	}
}

int main()
{

	enqueue(1);
	enqueue(2);
	enqueue(3);
	

	printf("\nQueue --> ");
	while(front != rear)
	{
		printf("(%d) ", front -> data);
		front = front -> next;
	}
	printf("(%d)", front -> data);
}
