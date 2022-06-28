#include <stdio.h>
int main() 
{
	float p,r,t,si;
	printf("Enter Principal \n");
	scanf("%f", &p);
	printf("Enter Rate \n");
	scanf("%f", &r);
	printf("Enter Time \n");
	scanf("%f", &t);
	si= (p*r*t)/100;
	printf("\n Your Interest Is %f", si);
	return 0;
}

