#include<stdio.h>
#include<stdlib.h>
void input(int a[],int n)
{
	int i;
	printf("Enter the array elements: \n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
}
void display(int a[],int n)
{
	int i;
	printf("Array elements are: \n");
	for(i=0;i<n;i++)
		{
			printf(" %d    ",a[i]);
		}
}
void search(int a[],int n)
{
	int item,i;
	printf("\nEnter the item to search in array:\n");
	scanf("%d",&item);
	int x=0;
	for(i=0;i<n;i++)
		{
			if(item == a[i])
			{
			    printf("FOUND\n");
			    x=1;
			    break;
			}
		}
		if(x!=1)
	printf("NOT FOUND\n");
}
void sum_avg(int a[],int n)
{
	int i,sum=0,avg;
		for(i=0;i<n;i++)
		{
			sum+=a[i];
		}
		printf("Sum:%d\nAverage:%d\n",sum,sum/n);
}
void interchange(int a[],int n)
{
	int i,j,small,big,c1=0,c2=0;
	small=a[0];
	big=a[0];
	for(i=1;i<n;i++)
	{
		if(small>a[i])
	{
			small=a[i];
			c1=i;
	}
			
	}
	for(j=1;j<n;j++)
	{
		if(big<a[j])
	{
			big=a[j];
			c2=j;
		}	
	}	
	int c=a[c1];
	a[c1]=a[c2];
	a[c2]=c;
}

void smallest_largest(int a[],int n)
{
	int i,j,small,big;
	small=a[0];
	big=a[0];
	for(i=1;i<n;i++)
	{
		if(small>a[i])
		small=a[i];	
	}
	for(j=1;j<n;j++)
	{
		if(big<a[j])
		big=a[j];	
	}	
	printf("Largest:%d\nSmallest:%d\n",big,small);
}
void find_duplicates(int a[], int n)
{
	int i,j;
	int x[n];
	int checked = -1;
	for(i=0; i<n; i++)
	{
		int count = 1;
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				count++;
				x[j] = checked;
			}
		}
		if(x[i]!=checked)
		{
			x[i] = count;
		}
	}
	
	printf("\nFrequency of Elements: \n");
	printf("Elements Frequency\n");
	for(i=0; i<n; i++)
	{
		if(x[i]>1)
		{
			printf("%d        %d",a[i], x[i]);
		}
		printf("\n");
	}
}
int main()
{
	int a[100];
	int i,n;
	printf("\nEnter the size of the array:\n");
	scanf("%d",&n);
	input(a,n);
	display(a,n);
	search(a,n);
	sum_avg(a,n);
	smallest_largest(a,n);
	interchange(a,n);
	display(a,n);
	find_duplicates(a,n);
	return(0);
}

