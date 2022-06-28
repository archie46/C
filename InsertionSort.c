#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
void print(int n, int a[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
void insort(int n, int a[])
{
	int i, j = 0, key,count = 0;
	//	  print(6,a);
	//       printf("\n");
	for (i = 0; i < n - 1; i++)
	{
		key = a[i + 1];
		for (j = 0; j <= i; j++)
		{
			if (key < a[j])
			{
				swap(&a[j], &a[i + 1]);
				count++;
			}
		}
		    //   print(6,a);
		    //   printf(" %d %d %d\n",i,j,key);
	}
	printf("%d",count);
}
int main()
{
	int m, n;
	printf("How Many Numbers You Want To Enter:\n");
	scanf("%d", &n);
	printf("Enter The Numbers:\n");
	int ab[n];
	for (m = 0; m < n; m++)
	{
		scanf("%d", &ab[m]);
	}
	//int ab[]={12,3,1,6,23,7};
	// print(6,ab);
	printf("The Numbers In Ascending Order Are:\n");
	insort(n, ab);
	print(n, ab);
	return 0;
}
