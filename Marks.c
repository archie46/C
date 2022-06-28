#include<stdio.h>
#include<math.h>
int main()
{
	float s1,s2,s3,s4,tot,avg;
	printf("Enter The Marks In respective subjects: \n");
	printf("Subject1 \n");
	scanf("%f",&s1);
	printf("Subject2 \n");
	scanf("%f",&s2);
	printf("Subject3 \n");
	scanf("%f",&s3);
	printf("Subject4 \n");
	scanf("%f",&s4);
	tot=(s1+s2+s3+s4);
	avg=tot/4;
	printf("Your Total is %f \n",tot);
	printf("Your Average is %f \n",avg);
	if(avg>=90)
	printf("Your Grade Is O");
	else if(avg>=80)
	printf("Your Grade Is E");
	else if(avg>=70)
	printf("Your Grade Is A");
	else if(avg>=60)
	printf("Your Grade Is B");
	else if(avg>=50)
	printf("Your Grade Is C");
	else
	printf("Your Grade Is F");
	return 0;	
}