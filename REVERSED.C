#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
char data;
struct node *next;
}
top=NULL, *newnode;
void push()
{
char ch[50]
int i;
printf("enter string \n");
scanf("%s",&ch);
for (i=0;i<strlen(ch);i++)
{
newnode=(struct node*)malloc(sizeof(newnode));
newnode->data=ch[1];
newnode->next=top;
top=newnode;
}
}
void display()
{
struct node *temp;
temp==top;
while(temp!=NULL)
{
printf("%c",temp->data);
temp=temp->next;
}
printf("\n");
}
void isempty()
{
if(top==NULL)
{
printf("stack is empty \n");
}
else
{
printf("stack is not empty");
}
}
int main()
{
int ch;
while(1)
{
printf("1.push \n");
printf("2.display \n");
printf("enter your choice");
switch(ch)
{
case 1:push();
      break;
case 2:display();
      break;
case 3:exit(0);
      break;
default:printf("invalid input");
}
}
}

