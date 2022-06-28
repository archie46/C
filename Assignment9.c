#include<stdio.h>
int fact(int a)
{
	if(a==0||a==1)
	return 1;
	else
    return ((a)*fact(a-1));
}
int gcd(int a,int b)
{
	int c,i;
	if(a<b)
	 {
	 	c=b%a;
	 	if(c!=0)
	 	{
	 		b=a;
	 		a=c;
	 		gcd(a,b);
	    }
	    else
	    {
	    	return a;
		}
	 }
	 else
	 {
	 		c=a%b;
	 	if(c!=0)
	 	{
	 		a=b;
	 		b=c;
	 		gcd(a,b);
	    }
	    else
	    {
	    	return b;
		}
	 }
}
void fibonacci(int a,int b,int n)
{
	if(n!=0)
{
    int c=a+b;
    printf("%d ",c);
    fibonacci(b,c,n-1);
}
}
int main()
{
	int num;
	printf("For Recursion Enter 1 \nFor Looping Enter 2\n");
	scanf("%d",&num);
	if(num==2)
	{
	int n,i;
	printf("Find The Factorial Of:");
	scanf("%d",&n);
	int c=n;
	for(i=n-1;i>=1;i--)
	{
		c=c*i;
	}
	printf("\nFactorial Of %d is %d.",n,c);
	int a,b;
	printf("\nEnter Two Numbers To Find Their GCD\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	{
		for(i=1;i>0;i++)
		{
			c=a%b;
			if(c==0)
			{
			printf("Their GCD is%d.",b);
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
			printf("Their GCD is%d",a);
			break;
		    }
			else
			{
				b=a;
				a=c;
			}	
		}		
	}
	printf("\nUpto How Many Numbers You Want To Print The Fibonacci Series?");
	scanf(" %d", &n);
	int n1,n2,n3;
	n1=0;
	n2=1;
	printf("%d %d ",n1,n2);
	for(i=0;i<(n-2);i++)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
	}
	else
	{
	int b;
	printf("Find The Factorial Of:");
	scanf("%d",&b);
	printf("\nFactorial Of %d is %d.",b,fact(b));
	int a;
	printf("\nEnter Two Numbers To Find Their GCD\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Thier GCD is%d",gcd(a,b));
	    int n;
	printf("\nUpto How Many Numbers You Want To Print?");
	scanf("%d",&n);
	int n1,n2,n3;
	n1=0;
	n2=1;
	printf("%d %d ",n1,n2);
	fibonacci(n1,n2,n-2);
    }
    }
