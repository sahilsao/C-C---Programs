/*Program Of Quick Sort*/
#include<stdio.h>
#include<conio.h>
int loc,a[25];
int quick(int left,int right);
int main()
{
int top=-1,n,i,lower[20],upper[20],beg,end;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the elements of array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
top++;
lower[top]=0;
upper[top]=n-1;
while(top!=-1)
{
beg=lower[top];
end=upper[top];
top--;
loc=quick(beg,end);
if(beg<loc-1)
{
top++;
lower[top]=beg;
upper[top]=loc-1;
}
if(loc+1<end)
{
top++;
lower[top]=loc+1;
upper[top]=end;
}
}
printf("Sorted array: ");
for(i=0;i<n;i++)
{
printf("\n");
printf("%d",a[i]);

}
}
int quick(int left,int right)
{
int temp;
loc=left;
while(1)
{
while((a[loc]<=a[right])&&(loc!=right))
{
right--;
}
if(loc==right)
return loc;
if(a[loc]>a[right])
{
temp=a[loc];
a[loc]=a[right];
a[right]=temp;
loc=temp;
}
while((a[left]<=a[loc])&&(left!=loc))
left++;
if(left==loc)
return loc;
if(a[left]>a[loc])
{
temp=a[loc];
a[loc]=a[left];
a[left]=temp;
left=loc;
}
}
}

