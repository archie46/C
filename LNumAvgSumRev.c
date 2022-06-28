#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,c,f,g,h,z,k,d=0;
	printf("Enter The Number For Reversing:\n");
	scanf("%d",&c);
	float a,b,sum,avg;
	printf("Total Number of Integers :\n");
	scanf("%d",&n);
	printf("Enter %d Numbers \n",n);
	printf("Enter Number 1:\n");
	scanf("%f",&a);
	sum=a;
	for(i=2;i<=n;i++)
	{
		printf("Enter NUmber %d :\n",i);
		scanf("%f",&b);
		sum+=b;
		if(a<b)
		a=b;
	}
	avg=sum/n;
	printf("The Reverse Of The Given Number Is:");
	if(c!=0)
	{
        for(i=c;(i%10==0);i=i/10)
		{
			k=n/10;
			d++;
		}
		for(i=1;i<=d;i++)
		{
		printf("0");	
		}
   }	
        for(f=c;f>0;f=f/10)
	{
		g=f%10;
		h=h*10+g;
	}
	printf("%d",h);
	printf("\nThe Sum Of The Given %d Numbers Is %f",n,sum);
	printf("\nThe Average Of The Given %d Numbers Is %f",n,avg);
	printf("\nThe Largest Of The Given %d Numbers Is %f",n,a);
	return 0;
}
