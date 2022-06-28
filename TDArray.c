#include<stdio.h>
void print(int m,int n,int arr[][n])
{
	int i,j;
	for (i=0;i<m;i++)
{
printf("\n");
    for (j=0;j<n;j++)
         {
 printf("%d ",arr[i][j]);
         }
}
printf("\n");
}
void getArray(int m,int n,int arr[][n]){
	int i,j;
	  for (i=0;i<m;i++){
         for (j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
         }
    }
}
void transpose(int m,int n,int arr[][n])
{
	int i,j,arrr[m][n];
	for (i=0;i<m;i++)
	 for (j=0;j<n;j++)
	 arrr[j][i]=arr[i][j];
	 print(5,5,arrr);
}
int main()
{
	int a[6][6];
	getArray(6,6,a);
	print(6,6,a);
//	={
//         {11,1,7,9,7},
//         {13,54,56,2,5},
//         {23,43,89,22,13},
//         {14,15,17,16,19},
//		 {43,3,6,8,10}
//		         };
		       //  print(5,5,a);
		       //  transpose(5,5,a);
		int i,j,big;
//		big=a[0][0];
//		for (i=0;i<5;i++)
//    for (j=0;j<5;j++)
//	{
//		if(big<a[i][j])
//		big=a[i][j];
//		}
//		printf("%d",big);	

	return 0;
}
