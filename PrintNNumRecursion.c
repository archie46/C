#include<stdio.h>
int print(int a)
{
if(a==1)
return 1;
else
printf("%d ",print(a-1));
return a;
}
int main()
{
	int b;
	scanf("%d",&b);
	print(b+1);
	return 0;
}
