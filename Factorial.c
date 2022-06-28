#include<stdio.h>
int fact(int n){
     int i,x=1;
     for(i=1;i<=n;i++)
     {
         x=x*i;
     }
     return x;
 }
int main()
{
	int n,i,f;
	f=i=1;
	//scanf("%d",&n);
	while(i<=n)
	{
		f*=i;
		i++;
	}
	printf("%d",fact(5));
	return 0;
}
