//PUSH, POP, PEEK

# include <stdio.h>
//# include <stdlib.h>

int MAX = 8;
int stack[8];
int top = -1;

	int isempty()
	{
		if (top==-1)
			return 1;
		else;
			return 0;
	}
	
	int isfull()
	{
		if (top==MAX)
			return 1;
		else
			return 0; 
	}
	
	int push(int a)
	{
		if(!isfull())
		{
			top = top + 1;
			stack[top] = a;
		}
		else
			printf("Stack is full can't insert");
	}
	
	int pop()
	{
		int data;
		
		if (!isempty())
		{
			data = stack[top];
			top = top - 1;
			return data;
		}
		else
			printf("Stack is empty");
	}
	
	int Top()
	{
		printf("Top element is: %d\n",stack[top]);
	}

int main()
{

	
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	push(7);
	push(8);

	Top();
	
	pop();
		
	printf("Elements in Stack after PUSH and POP operation: \n") ;
	while(top!=-1)
	{
		printf("%d\n", stack[top]);
		top = top - 1;
	}
	
	
	
	
}
