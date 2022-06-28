#include<stdio.h>
#include<math.h>
int main() 
{
float a,b,c,r1,r2,d,D;
printf("Enter Coefficient Of x^(2)\n");
scanf("%f",&a);
printf("Enter Coefficient Of x\n");
scanf("%f",&b);
printf("Enter Constant Term\n");
scanf("%f",&c);
d=((b*b)-4*a*c);
if(d>0||d==0)
{
D=sqrt(d);
r1=(-b+D)/2*a;
r2=(-b-D)/2*a;
printf("The Roots Of The Equation Are %f, and %f.",r1,r2);
}
else
{
	printf("The Roots Of The Equation Are Not Real");
}
return 0;
}
