#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf("Enter the Year:\n");
	scanf("%d",&a);
	b=a%4;
	c=a%100;
	d=a%400;
	((b==0)&&(c!=0)||(d==0))?printf("%d is a leap year",a)
	:printf("%d is not a leap year",a);
	return 0;
}
