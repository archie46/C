#include<stdio.h>
#include<stdlib.h>
void lshift(int d,int n,int a[])
{
   int arr[n],i,j;
   for(i=0;i<n;i++)
   {
      j=i+d;
      if(j<n)
        arr[j]=a[i];
      else
        arr[abs(j-n)]=a[i];
   }
  for(i=0;i<n;i++)
   printf("%d ",arr[i]);
}
int main()
{
	int a[]={1,2,3,4,5};
//	int ab[5];
    lshift(2,5,a);
//for(int i=0;i<5;i++)
//    printf("%d ",ab[i]);
	return 0;
}
