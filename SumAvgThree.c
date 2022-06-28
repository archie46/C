#include <stdio.h>
int main() {    
    int n1,n2,n3,avg,sum;
    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2 , &n3);
    sum = n1+n2+n3;
	avg = (n1+n2+n3)/3;     
    printf("%d ",sum);
    printf("%d",avg);
    return 0;
}
