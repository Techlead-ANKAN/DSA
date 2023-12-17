# include <stdio.h>
# include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
	
	
int enqueue(int data)
{
			
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = data;
	newnode -> next = NULL;
	
	if ((front == NULL) && (rear == NULL))
	{
		front = newnode;
		rear = newnode;
		rear -> next = front;
	}
	else
	{
		rear -> next = newnode;
		rear = newnode;
		newnode -> next = front;
	}
		printf("(%d) --> Enqueued\n", newnode -> data);
}

int dequeue()
{
	if (rear == NULL)
	{
		printf("Queue Empty.");
		return -1;
	}
	else
	{
		printf("(%d) --> Dequeued\n", front -> data);
		front = front -> next;
	}
}

int peek()
{
	printf ("\nFront Element --> %d\n", front -> data);
}

int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	
	dequeue();
	
	peek();
	
	printf("\nCircular Queue --> ");
	while (front != rear)
	{
		printf("%d ", front -> data);
		front = front -> next;
	}
	printf("%d", front -> data);
	
}
