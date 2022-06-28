#include<stdio.h>
int main()
{
	int i,j,count,n;
	for(i=1;i<1000;i++)
    {
    	n=i;
    	count=0;
    	for(j=1;j<=n;j++)
    	{
    		if((n%j)==0)
    		count++;
		}
		if(count==2)
		printf("%d\n",n);
		else
		{
			continue;
		}
		if(i>=300)
		break;
	}
}
