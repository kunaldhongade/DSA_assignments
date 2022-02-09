#include<stdio.h>
struct node
{
int data;
struct node *next;
}
*newnode, *temp;
struct node *front=NULL;
struct node *rare=NULL;
void enqueue(int x)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&x);
newnode->data=x;
newnode->next=NULL;
if(rare==NULL)
{
front=rare=newnode;
rare->next=front;
}
else
{
rare->next=newnode;
rare=newnode;
rare->next=front;
}
}
void dequeue()
{
temp=front;
if(front==NULL && rare==NULL)
{
printf("underflow");
}
else
if(front==rare)
{
front=rare=NULL;
free(temp);
}
else
{
printf("%d",front->data);
front=front->next;
rare->next=front;
free(temp);
}
}
void display()
{
struct node *temp;
temp=front;
if(front==rare && rare==NULL)
{
printf("queue is empty");
}
else
{
while(temp->next!=front)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("%3d",temp->data);
}
}
void peek()
{
if(front==NULL &&  rare==NULL)
{
printf("queue is empty");
}
else
{
printf("top element is %d",front->data);
}
}
void isempty()
{
if(front==NULL && rare==NULL)
{
printf("queue is empty");
}
else
{
printf("queue is not empty");
}
}
void main()
{
int no;
clrscr();
while(1)
{
printf("\n1. enqueue \n");
printf("2,dequeue \n");
printf("3.display \n");
printf("4.peek \n");
printf("5.isempty \n");
printf("enter your choice");
scanf("%d",&no);
switch(no)
{
int x;
case 1:enqueue(x);
       break;
case 2:dequeue();
       break;
case 3:display();
       break;
case 4:peek();
       break;
case 5:isempty();
       break;
case 6:exit(0);
      break;
default:printf("invalid input");
}
}
}