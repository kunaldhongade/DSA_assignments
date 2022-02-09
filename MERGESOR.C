#include<stdio.h>
#include<conio.h>
int quicksort (int a[20],int lb,int ub)
{
int pivot=lb,start=lb,end=ub,loc,temp;
if(lb<ub)
{
while(start<end)
{
while(a[start]<=a[pivot] && start<end)
{
start++;
}
while(a[end]>a[pivot])
{
end--;
}
if(start<end)
{
temp=a[start];
a[start]=a[end];
a[end]=temp;
}
}
temp=a[pivot];
a[pivot]=a[end];
a[end]=temp;
quicksort(a,lb,end-1);
quicksort(a,end+1,ub);
}
}
int main()
{
int a[20],n,i,lb,ub;
clrscr();
printf("enter the number of element");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("before starting array is ");
for(i=0;i<n;i++)
{
printf("%3d",a[i]);
}
quicksort(a,lb=0,ub=n-1);
printf("\n after sorting");
for(i=0;i<n;i++)
printf("%3d",a[i]);
getch();
return 0;
}