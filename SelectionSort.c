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
void selectsort(int n, int a[])
{
	int i, j, p;
	for (j = 0; j < n; j++)
	{
		int ac = a[j];
		p = 0;
		for (i = j; i < n; i++)
		{
			if (ac > a[i])
			{
				ac = a[i];
				p = i;
			}
		}
		if (p != 0)
		{
			a[p] = a[j];
			a[j] = ac;
		}
	}
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
	printf("The Numbers In Ascending Order Are:\n");
	selectsort(n, ab);
	print(n, ab);
	return 0;
}
