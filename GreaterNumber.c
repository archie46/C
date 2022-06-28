#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("Enter the Numbers:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	(a>b)?printf(" %d is greater",a)
	:printf(" %d is greater",b);
	return 0;
}
