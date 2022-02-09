#include<stdio.h>
int main()
{
int a[100],i,n,data;
printf("enter no of element in array");
scanf("%d",&n);
printf("enter %d integer",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element what you want to search");
scanf("%d",&data);
for(i=0;i<n;i++)
{
if(a[i]==data)
{
printf("%d is present at location %d",data,i+1);
break;
}
}
if(i==n)
printf("%d is not in the array",data);
return 0;
}