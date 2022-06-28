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
  while(ft!=lt)
  {
  	mid=(ft+lt)/2;
  	if(ac[mid]==a)
  	{
  		printf("Target Found at Index %d.",mid);
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
 int m,n,k,count;
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
printf("For Binary Search Enter 1\nFor Linear Search Enter 2");
scanf("%d",&m);
if(m==1)
{
    bubblesort(n,ab);
    binarysearch(n,k,ab); 
}
else
{
	for(m=0;m<12;m++)
{
	if(ab[m]==k)
	{
		count=1;
		printf("Target Found at Index %d.",m);
		break;
	}
}
if(count!=1)
printf("Target Not Found");
}
return 0;
}
