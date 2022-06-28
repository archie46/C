#include<stdio.h>
#include<stdlib.h>
void print(int m,int n,int arr[][n])
{
	//int i,j;
	for (int i=0;i<m;i++)
{
    for (int j=0;j<n;j++)
         {
 printf("%d ",arr[i][j]);
         }
         printf("\n");
}
}
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    system("cls");
    int i=0;
    int j=(2*n)-2;
    int l=j+1;
	int a[j+1][j+1];
    int p,q,r,s;
    while(i<=j)
      {
           p=i;
           q=i;
           do{
            a[p][q]=n;
            a[q][p]=n;
            q++;
           }while(q<=j);
                q--;
            do{
            a[q][p]=n;
            a[p][q]=n;
            p++;
            }while(p<=j);
                i++;
                j--;
                n--;
        }
    print(l,l,a);
	return 0;
}
