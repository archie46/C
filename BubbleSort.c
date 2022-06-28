#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}
void print(int n, int a[]){
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void bubblesort(int n, int a[]){
	int i, count;
	do{
		count = 0;
		for (i = 0; i < (n - 1); i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(&a[i], &a[i + 1]);
				count++;
			}
		}
		print(9,a);
	}while (count > 0);
}
int main()
{
//	int i, n;
//	printf("How Many Numbers You Want To Enter:\n");
//	scanf("%d", &n);
//	printf("Enter The Numbers:\n");
//	int ab[n];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &ab[i]);
//	}
//	printf("The Numbers In Ascending Order Are:\n");
	int ab[]={234,54,12,76,11,87,32,12,45};
	bubblesort(9, ab);
	//print(9, ab);
	return 0;
}
