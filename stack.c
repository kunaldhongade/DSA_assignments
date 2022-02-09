#include<stdio.h>
#include<conio.h>
#define  max 4
typedef struct stack
{
	int data[max];
	int top;
}stack;

void initialise(stack *);
void push(stack *,int);
int pop(stack *);
int isfull(stack *);
int isempty(stack *);
void display(stack *);
void peek();

void main()
{
	struct stack *s;
	int x,ch,i;
	clrscr();
	do
	{
		printf("\n 1.Initialize");
		printf(" \n 2.push");
		printf(" \n 3.pop");
		printf(" \n 4.isfull");
		printf(" \n 5.isempty");
		printf(" \n 6.display");
		printf(" \n 7.Peek");
		printf(" \n 8.EXit");


		printf("\n\n Enter the choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				initialise(&s);
			break;

			case 2:
				if(isfull(&s))
				printf("\n Cannot insert n element...........overflow");
				else
				{
					printf("enter the data to insert : ");
					scanf("%d",&x);
					push(&s,x);
				}
				break;

			case 3:
				if(isempty (&s))
				{
					printf("\n cannot delete an element....underflow");
				}
				else
				{
					x=pop(&s);
					printf("\n element popped....%d",x);
				}
				break;

			case 4:
				if(isfull(&s))
					printf("\n  Stack is Full...");
				else
					printf("\n Stack is Not full..");
				break;

			case 5:
				if(isempty(&s))
				{
					printf("\n Stack is Empty");
				}
				else
					printf("\nstack is not empty");
				break;

			case 6:
					printf("\n Stack content: \n\n");
					display(&s);
				break;
			case 7:
				peek();
			default:
				exit(0);
		}
	}while(ch!=7);
}

void initialise(stack *s)
{
	s->top=-1;
	printf("\n stack initiallized successfully..");
}
void push(stack *s,int x)
{
	s->top=s->top+1;
	s->data[s->top]=x;
}
int pop(stack *s)
{
	int x;
	x=s->data[s->top];
	s->top=s->top-1;
return x;
}

int isfull(stack *s)
{
	if(s->top==max-1)
	return 1;
	else
	return 0;
}
int isempty(stack *s)
{
	if(s->top==-1)
	return 1;
	else
	return 0;
}
void display(stack *s)
{
	int i;
	for(i=s->top;i>=0;i--)
	{
		printf("| %d |\n",s->data[i]);
	}
}
void peek()
{
	if (top == NULL)
	{
		printf("no value inserted.....!");
	}
	else
		printf("%d", top);
}