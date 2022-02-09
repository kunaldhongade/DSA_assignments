#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
}*front, *rear;

void enqueue();
void dequeue();
void display();
void check();
void peek();

void main()
{
	int choice;

	while(1)
	{
	printf("\n1. enqueue");
	printf("\n2. dequeue");
	printf("\n3. display");
	printf("\n4. Check");
	printf("\n5. peek");
	printf("\n6. Exit");

	printf("\nEnter choice : ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		enqueue();
		break;
	case 2:
		dequeue();
		break;
	case 3:
		display();
			break;
		case 4:
			check();
			break;
		case 5:
			peek();
			break;
		case 6:
			exit(0);
			break;

		default:
			printf("\n\twrong choice...!@!@!@!@");
			break;
		}
	}
}


void enqueue()
{
	struct node *temp;

	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter value to be insert : ");
	scanf("%d", &temp->data);
	temp->next = NULL;
	if (rear  ==  NULL)
	{
		front = rear = temp;
	}
	else
	{
		rear->next = temp;
		rear = temp;
	}
}

void dequeue()
{
	struct node *temp;

	temp = front;
	if (front == NULL)
	{
		printf("queue is empty...!@!@!@ \n");
		front = rear = NULL;
	}
	else
	{
		printf("deleted element is %d\n", front->data);
		front = front->next;
		free(temp);
	}
}


void check()
{
	if (front == NULL)
		printf("\nQueue is empty...!@!@!@\n");
	else
		printf("\nElements are present in the queue...!@!@!@");
}


void peek()
{
	if (front == NULL)
	{
		printf("\nThe queue is empty");
	}
	else
		printf("\n\tThe peek element is : %d", front->data);
}

void display()
{
	struct node *temp;
	int cnt = 0;
	temp = front;

	if (front  ==  NULL)
	{
		printf("\n\tQueue empty...!@!@!@");
	}
	while (temp)
	{
		printf("\n| %d |", temp->data);
		temp = temp->next;
		cnt++;
	}
	printf("\n\t size of queue is %d", cnt);
}