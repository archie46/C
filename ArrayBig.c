#include<stdio.h>
int main()
{
	int a[50],size,big,i;
	printf("Enter Array Size");
	scanf("%d",&size);
	printf("\nEnter %d Elements Into The Array:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	big=a[0];
	for(i=1;i<size;i++)
	{
		if(big<a[i])
		big=a[i];
	}
	printf("\nBiggest Is:%d",big);
	return 0;
}
