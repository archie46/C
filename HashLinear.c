#include<stdio.h>
int main()
{
	int array[11]={0,0,0,0,0,0,0,0,0,0,0};
	int n,h,k=11,i=7;
//	while(i<100)
//	{
//		printf("%d ",array[0]);
//		i++;
//	}
	do{
		int j=1;
	    printf("Enter: ");
		scanf("%d",&n);
		h=n%k;
		if(array[h]==0)
	{
			array[h]=n;
		printf("\n%d Inserted At %d\n",n,h);
	}
		else
		{
		   do{
		     h=(h+j)%k;
		   }while(array[h]!=0);
		   array[h]=n;
		   printf("\n%d Inserted At %d\n",n,h);
		}
		i--;
	}while(i);
	return 0;
}
