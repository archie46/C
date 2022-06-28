#include<stdio.h>
#include<stdlib.h>
int swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
void print(int n, int a[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
void bubblesort(int n,int a[])
{
    int i,j;
     for(i=0;i<n-1;i++)
     {
         for(j=0;j<n-i-1;j++)
         {
             if (a[j] > a[j + 1])
			{
				swap(&a[j], &a[j + 1]);
			}
         }
     }
}
int main()
{
 int i,n;
// printf("How Many Numbers You Want To Enter:\n");
// scanf("%d",&n);
// printf("Enter The Numbers:\n");
// int ab[n];
// for(i=0;i<n;i++)
// {
// 	scanf("%d",&ab[i]);
// }
// printf("The Numbers In Ascending Order Are:\n");
    	int ab[]={234,54,12,76,11,87,32,12,45};
	bubblesort(9, ab);
    print(9,ab);
}
