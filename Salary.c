#include<stdio.h>
int main()
{
	int sal,da,hra,lic,pf,gsal,nsal;
	printf("Enter Salary \n");
	scanf("%d",&sal);
	da=0.7*sal;
	hra=0.3*sal;
	lic=0.1*sal;
	pf=0.12*sal;
	gsal=(sal+da+hra-lic-pf);
	nsal=(gsal+lic+pf);
	printf("Gross Salary :%d",gsal);
	printf("Net Salary %d",nsal);
	return 0;	
}
