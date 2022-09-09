#include<stdio.h>
int gcd(int a,int b)
{
	int c,i;
	if(a<b)
	 {
	 	c=b%a;
	 	if(c!=0)
	 	{
	 	//	b=a;
	 	//	a=c;
	 		gcd(a,c);
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
	 	//	a=b;
	 	//	b=c;
	 		gcd(b,c);
	    }
	    else
	    {
	    	return b;
		}
	 }
}
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d",gcd(a,b));
	return 0;
}
