# include <stdio.h>
# include <stdlib.h>

int MAX = 8;
int Queue[8];
int front = -1, rear = -1;

int isfull()
{
	if (rear==MAX)
		return 1;
	else
		return 0;
}

int isempty()
{
	if (rear==-1)
		return 1;
	else
		return 0;
}

int enqueue(int a)
{
	if(!isfull())
	{
		front = 0;
		rear = rear + 1;
		Queue[rear] = a;
	}
	else
		printf("Queue Full");
}

int dequeue()
{
	if (!isempty())
	{
		front = front + 1;
	}
	else
		printf("Queue Empty");
}

int peek()
{
	if (!isempty())
	{
		printf("FRONT element is: %d\n", Queue[front]);
	}
	else
		printf("Empty Queue");
}

int main()
{
	int data;
	enqueue(9);
	enqueue(11);
	enqueue(0);
	enqueue(3);
	enqueue(5);
	enqueue(7);

	dequeue();

	peek();	
	
	printf("Queue elements after ENQUEUE & DEQUEUE OPERTIONS: \n");
	while(front!=rear+1)
	{
		data = Queue[front];
		front ++;
		printf("%d ", data);
	}
	
}
	
	
	
	
