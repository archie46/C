#include<stdio.h>
int main()
{
	int n,f,i,count=0;
	printf("Enter A Number :");
	scanf("%d",&n);
	printf("These Are The Prime Numbers Between 1 and %d:\n",n);
	for(f=1;f<=n;f++)
{    
    count=0;
	for(i=1;i<=f;i++)
	{
		if(f%i==0)
		count++;
	}
	if(count==2)
    printf("%d\n",f); 
}
    return 0;
}
