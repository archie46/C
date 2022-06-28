#include<stdio.h>
#include<stdlib.h>
int main()
{
	 int m,n;
 printf("How Many Numbers You Want To Enter:\n");
 scanf("%d",&n);
 printf("Enter The Numbers:\n");
 int ab[n];
  for(m=0;m<n;m++)
 {
 	scanf("%d",&ab[m]);
 }
 int i;
 		int ac=ab[0];
		for(i=0;i<n;i++)
	  {
		if(ac>ab[i])
		{
			ac=ab[i];
	    }
	  }
		printf("%d ",ac);
		return 0;
}

