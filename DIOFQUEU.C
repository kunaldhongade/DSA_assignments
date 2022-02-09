#include<stdio.h>
struct node
{
int data;
struct node *next;
}
*newnode, *temp;
struct node *front=NULL;
stuct node *rare=NULL;
void enqueue(int x)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&x);
newnode->next=NULL;
if(front==NULL && rare==NULL)
{
front=rare=newnode;
}
else
{
rare->next=newnode;
rare=newnode;
}
}
void dequeue()
{
if(front==NULL && rare==NULL)
{
printf("stack is empty");
}
else
{
temp=front;
printf("%d",front->data);
front=front->next;
free(temp);
}
}
void display()
{
struct node *temp;
temp=front;
if(front==NULL && rare==NULL)
{
printf("queue is empty");
}
else
{
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
}
void peek()
{
if(front==NULL && rare==NULL)
{
printf("queue is empty");
}
else
{
printf("%d",front->data);
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
printf("\n1.enqueue \n");
printf("2.dequeue \n");
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
case 3:dispaly();
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
