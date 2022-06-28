#include<stdio.h>
int main()
{
	int n,i,s=21,pick;
  while(s>0)
  {
  	scanf("\n%d",&n);
  	printf("\n%d",s-n);
  	pick=5-n;
  	s=s-n-pick;
  	printf("\n%d",s);
  }
}
