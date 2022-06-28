#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],sum[2][2],sub[2][2],trap[2][2],i,j,s,ss,none;
	printf("Enter Elements of 1st Matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Elements Of 2nd Matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("My First Matrix Is");
	for(i=0;i<2;i++)
	{
	printf("\n");
	for(j=0;j<2;j++)
	{
		printf("%d\t",a[i][j]);
	}
    }
    	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			trap[j][i]=a[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(trap[i][j]==a[i][j])
			s++;
			if(trap[i][j]==-a[i][j])
			ss++;
			else
			none++;
		}
	}
if(s==4)
printf("\nIt Is Symmetric.\n");
if(ss==4)
printf("\nIt Is Skew Symmetric.\n");
if(none==2)
printf("\nIt Is Neither Symmetric Nor Skew Symmetric\n.");
   printf("\nMy Second Matrix Is");
	for(i=0;i<2;i++)
	{
	printf("\n");
	for(j=0;j<2;j++)
	{
		printf("%d\t",b[i][j]);
	}
    }
	    	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			trap[j][i]=b[i][j];
		}
	}
	s=0;ss=0;none=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(trap[i][j]==b[i][j])
			s++;
			if(trap[i][j]==-b[i][j])
			ss++;
			else
			none++;
		}
	}
if(s==4)
printf("\nIt Is Symmetric.\n");
if(ss==4)
printf("\nIt Is Skew Symmetric.\n");
if(none==2)
printf("\nIt Is Neither Symmetric Nor Skew Symmetric\n."); 
    	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nSum of Two Matrices:\n");
	  	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
		printf("%d\t",sum[i][j]);
		}
	}
	    	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("\nDifference of Two Matrices:\n");
	  	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
		printf("%d\t",sub[i][j]);
		}
	}
	return 0;    
}
