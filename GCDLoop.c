#include<stdio.h>
int main()
{
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
	return 0;
}
