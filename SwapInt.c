#include<stdio.h>

int main()
{
	int x,y,z;
	printf("Enter Two Numbers \n");
	scanf("%d %d",&x,&y);
	printf("\n The Two Numbers That Are Given Are: %d,%d",x,y);
	z=x;
	x=y;
	y=z;
	printf("\n The Two Numbers After Swapping Are Given Are: %d,%d",x,y);
	return 0;
	
}
