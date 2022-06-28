#include<stdio.h>
void cshift(int *a,int *b,int *c)
{
	int d;
	d=*a;
	*a=*c;
	*c=*b;
	*b=d;
}
int main()
{
	int x,y,z,i,n;
	printf("Enter 3 Numbers:");
	scanf("%d%d%d",&x,&y,&z);
	printf("Enter The Number Of Times You Want To Shift:");
	scanf("%d",&n);
	printf("Before Shift\nx=%d,y=%d,z=%d\n",x,y,z);
	for(i=1;i<=n;i++)
	{
	 cshift(&x,&y,&z);
	 printf("After Shift %d\nx=%d,y=%d,z=%d\n",i,x,y,z);
    }
    return 0;
}
