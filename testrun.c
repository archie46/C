#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
float area(triangle tr)
{
   float s,area;
      s=(tr.a+tr.b+tr.c)/2;
    area=sqrt(s*(s-tr.a)*(s-tr.b)*(s-tr.c));
    return area;
}
int main()
{
	printf("ready");
	int n,i;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for ( i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	printf("\n");
	for ( i = 0; i < n; i++) {
		printf("%d %d %d   %d\n", tr[i].a, tr[i].b, tr[i].c,area(tr[i]));
	}
	return 0;
}
