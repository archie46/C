#include<stdio.h>
#include<stdlib.h>
int swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
void bubblesort(int n,int a[])
{
    int i,count=1,j;
    while(count>0)
    {
    	count=0;
	for(i=0;i<(n-1);i++)
	 {
		if(a[i]>a[i+1])
		{
			swap(&a[i],&a[i+1]);
		    count++;
		}
	 }
    }
}
void binarysearch(int n,int a,int ac[])
{
  int ft,mid,lt;
    	ft=0;
    	lt=n-1;
  while(a>1)
  {
  	mid=(ft+lt)/2;
  	if(ac[mid]==a)
  	{
  		printf("Target Found");
  		break;
	  }
	  else if(ac[ft]>=ac[lt])
	  {
  		printf("Target Not Found");
  		break;
	  }
	  else if(a<ac[mid])
	  {
	  	lt=mid-1;
	  }
	  else
	  {
	  	ft=mid+1;
	  }
  }
}
int main()
{
 int m,n,k;
 printf("How Many Numbers You Want To Enter:\n");
 scanf("%d",&n);
 printf("Enter The Numbers:\n");
 int ab[n];
 for(m=0;m<n;m++)
 {
 	scanf("%d",&ab[m]);
 }
printf("Enter Target:\n");
 scanf("%d",&k);

    bubblesort(n,ab);
    binarysearch(n,k,ab);
}
