#include<stdio.h>
int main()
{
	int n,i,n1=0,n2=1,n3;;
	printf("Upto How Many Numbers You Want To Print?");
	scanf("%d",&n);
	printf("%d %d ",n1,n2);
	for(i=0;i<(n-2);i++)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
