#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],prod[3][3],i,j;
	printf("\nEnter Elements of 1st Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Elements Of 2nd Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("My First Matrix Is");
	for(i=0;i<3;i++)
	{
	printf("\n");
	for(j=0;j<3;j++)
	{
		printf("%d\t",a[i][j]);
	}
    }
    printf("\nMy Second Matrix Is");
	for(i=0;i<3;i++)
	{
	printf("\n");
	for(j=0;j<3;j++)
	{
		printf("%d\t",b[i][j]);
	}
    }
    	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			prod[i][j]+=a[i][j]*b[i][j];
		}
	}
	printf("\nSum of Two Matrices:\n");
	  	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
		printf("%d\t",prod[i][j]);
		}
	}
	return 0;    
}
//2 5 6 4 6 9 1 7 0
//5 7 8 3 5 9 1 5 3
