#include<stdio.h>
int fact(int a)
{
	if(a==0||a==1)
	return 1;
	else
    return a*fact(a-1);
}
void printfac(int m,int n,int arr[][n])
{
int i,j;
for (i=0;i<m;i++)
    for (j=0;j<n;j++)
                arr[i][j]=fact(arr[i][j]);
for (i=0;i<m;i++)
{
printf("\n");
    for (j=0;j<n;j++)
         {
 printf("%d ",arr[i][j]);
         }
}
}

int main()
{
int a[3][3];
int i,j;
for (i=0;i<3;i++)
    for (j=0;j<3;j++)
                a[i][j]=i+j;
             // scanf("%d",&a[i][j]);
for (i=0;i<3;i++)
{
printf("\n");
    for (j=0;j<3;j++)
         {
 printf("%d ",a[i][j]);
         }
}
printf("\n");
printfac(3,3,a);
return 0;
}
