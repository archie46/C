#include<stdio.h>
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
void reverse(int n,int a[])
{
	int i;
	if((n%2)==0)
{
  for(i=0;i<(n/2);i++)
 {
 	swap(&a[i],&a[n-(i+1)]);
 }
}
else
{
  for(i=0;i<((n-1)/2);i++)
 {
 	swap(&a[i],&a[n-(i+1)]);
 }	
}

}
int main()
{
	int size,big,i;
	printf("Enter Array Size:");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter %d Elements Into The Array:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	reverse(size,a);
 printf("\nThe Reversed Array Is ");
		for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
