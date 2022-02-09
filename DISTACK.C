#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int data;
struct node *link;
}
*newnode, *top=NULL,*temp;
void push(int x)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->link=top;
top=newnode;
}
void display()
{
temp->link=top;
top=newnode;
}
void dispaly()
{
temp=top;
if(top==NULL)
{
printf("stack is empty");
}
else
{
while(temp!=NULL)
{
printf("%3d",temp->data);
temp=temp->link;
}
}
}
void peek()
{
if(top==NULL)
{
printf("stack is empty");
}
else
{
printf("%d",top->data);
top=top->link;
free(temp);
}
}
void main()
{
int no,x;
clrscr();
while(1)
{
printf("\n1.push \n");
printf("2. pop \n");
printf("3.peek \n");
printf("4.dispaly \n");
printf("5. exit \n");
printf("enter your choice");
scanf("%d",&no);
switch(no)
{
case 1:push(x);
       break;
case 2:display();
       break;
case 3:peek();
       break;
case 5:exit(0);
       break;
default:printf("invalid input");
}
}
}
