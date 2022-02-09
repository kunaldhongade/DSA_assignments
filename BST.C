#include<stdio.h>
#include<conio.h>

struct node
{
int data;
struct node *left;
struct node *right;

}
struct node *insert(struct node *p,int d)
{
if(p==NULL)
{
p=(struct node*)malloc(sizeof(struct node));
p->left=p->right=NULL;
p->data=d;
}
else
{
if(d<p->data)
{
p->left=insert(p->left,d);
}
else
{
if(d>p->data)
{
p->right=insert(p->right,d);
}
}
}
return(p);
}
void prorder(struct node *root)
{
if(root==0)
{
return;
}
printf("%d",root->data);
preorder(root->left);
preorder(root->right);
}
void inorder(struct node *root)
{
if(root==0)
{
return;
}
inorder(root->left);
printf("%d",root->data);
inorder(root->right);
}
void postorder(struct node *root)
{
if(root==0)
{
return 0;
}
postorder(root->left);
postorder(root->right);
postorder("%d",root->data);
}
int countnode1(struct node *root)
{
int count=0;
if(root==0)
{
return 0;
}
else
{
count=1+countnode1(root->left)+countnode1(root->right);
return count;
}
}
int countleaf(struct node *root)
{
int c;
if(root===NULL0
{
return 0;
}
else
if(root->left==NULL)&&(root->right));
return c;
}
int countnonleaf(struct node *root)
{int c1;
if(root==NULL)
{
return 0;
}
else
{
if(root->left==NULL && root->right==NULL);
return 0;
else
c1=(1+countnonleaf(root->left)+countnonleaf(root->right));
return c1;
}
}
void main()
{
int x;
ch,count,c,c1;
struct node *root=null;
do
{
printf("\n1.insert \n");
printf("2. preorder \n");
printf("3. inorder \n");
printf("4. postorder \n");
printf("5. count \n");
printf("6.leafnode \n");
printf("7. nonleafnodes \n");
printf("8. exit \n");

scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter the node to insert into a tree");
       scanf("%d",&x);
       root=insert(root,x);
       break;
case 2:printf(preorder is:");
       preorder(root);
       break;
case 3:printf("inorder is:");
       inorder(root);
       break;
case 4:printf("postorder is:");
       postorder(root);
       break;
case 5:count=countnode1(root);
       printf("no of nodes are %d"count);
       break;
case 6:c=countleaf(root)
	printf("no of leaf nodes are %d",c);
	break;
case 7:c1=countnonleaf(root);
      printf("no of non leaf nodes are %d",c1);
      break;
case 8:exit(0);
      break;

default:printf("invalid input");
}
while(ch>0 && ch<8);
}
}