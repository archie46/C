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
  		printf("Target Found\n");
  		break;
	  }
	  else if(ac[ft]>=ac[lt])
	  {
  		printf("Target Not Found\n");
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
void linearsearch(int a[],int l,int n)
{
int i,count;
for(i=0;i<l;i++)
{
	if(a[i]==n)
	{
		count=1;
		printf("Target Found\n");
		break;
	}
}
if(count!=1)
printf("Target Not Found\n");
}
void linearsearchr(int i,int a[],int n,int l)
{
    if(a[i]==n)
    printf("Target Found\n");
    else if(i>l)
    printf("Target Not Found\n");
    else
    linearsearchr(i+1,a,n,l);
}
int main()
{
 int m,n,k,p;
 printf("How Many Numbers You Want To Enter:");
 scanf("%d",&n);
 printf("Enter The Numbers:\n");
 int ab[n];
 for(m=0;m<n;m++)
 {
 	scanf("%d",&ab[m]);
 }
printf("Enter Target:");
scanf("%d",&k);
do{
    printf("1.Binary Search \n2.Linear Search \nYour Choice:");
scanf("%d",&m);
if(m==1)
{
    bubblesort(n,ab);
    printf("1.Recursive Search\n2.Iterative Search\nYour Choice:");
    scanf("%d",&p);
    if(p==1)
    binarysearchr(n,k,ab,0,n-1);
    else
    binarysearch(n,k,ab);
}
else if(m==2)
{
    printf("1.Recursive Search\n2.Iterative Search\nYour Choice:");
    scanf("%d",&p);
    if(p==1)
    linearsearchr(0,ab,k,m);
    else
    linearsearch(ab,n,k);
}
else
    exit(0);
}while(1);
return 0;
}
