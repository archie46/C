#include<stdio.h>
int main()
{
	int num;
	printf("For Recursion Enter 1 \n For Looping Enter 2\n");
	scanf("%d",&num);
	if(num==1)
	{
	int n;
	printf("Find The Factorial Of:");
	scanf("%d",&n);
	int x=n-1;
	int c=n;
	while(x>=1)
	{
		c=c*x;
        x--;	
	}
	printf("\nFactorial Of %d is %d.",n,c);
	int a,b,c,i;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	{
		for(i=1;i>0;i++)
		{
			c=a%b;
			if(c==0)
			{
			printf("%d",b);
			break;
		    }
			else
			{
				a=b;
				b=c;
			}	
		}
	}
	else
	{
			for(i=1;i>0;i++)
		{
			c=b%a;
			if(c==0)
			{
			printf("%d",a);
			break;
		    }
			else
			{
				b=a;
				a=c;
			}	
		}		
	}
	}
}
