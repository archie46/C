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
void binarysearchr(int n,int a,int ac[],int ft,int lt)
{
    int mid;
  	mid=(ft+lt)/2;
  	if(ac[mid]==a)
  	{
  		printf("Target Found\n");
	  }
	    else if(ft>lt)
      {
          printf("Target Not Found\n");
      }
	  else if(a<ac[mid])
	  {
	  	binarysearchr(n,a,ac,ft,mid-1);
	  }
	  else
	  {
	  	binarysearchr(n,a,ac,mid+1,lt);
	  }
}
int main()
{
// int m,n,k;
// printf("How Many Numbers You Want To Enter:\n");
// scanf("%d",&n);
// printf("Enter The Numbers:\n");
// int ab[n];
// for(m=0;m<n;m++)
// {
// 	scanf("%d",&ab[m]);
// }
int k;
int ab[]={56,78,5,43,2,12,45};
int l=sizeof(ab)/sizeof(ab[0]);
printf("Enter Target:\n");
scanf("%d",&k);

    bubblesort(l,ab);
    binarysearchr(l,k,ab,0,l-1);
    return 0;
}
