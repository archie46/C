#include<stdio.h>
#include<math.h>
int main()
{
	float s,a,b,c,area;
	printf("Enter the Length Of The Sides:\n");
	scanf("%f %f %f",&a,&b,&c);
	printf("The Given Sides Are %f %f %f\n",a,b,c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The Perimeter Of The Triangle Is: %f \n",a+b+c);
	printf("The Area Of The Triangle Is: %f",area);
	return 0;
}
