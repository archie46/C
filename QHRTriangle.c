// #include<stdio.h>
// int main()
// {
// 	int a;
// 	int max=-1;
// 	while(scanf("%d",&a)==1)
// 	{
// 		if(a<0)
// 		continue;
// 		if(max<a)
// 		max=a;
// 	}
// }
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
void swap(triangle *a,triangle *b)
{
    triangle c;
   c=*a;
   *a=*b;
   *b=c;  
}
// int area(int a,int b,int c)
// {
//    int s,area;
//       s=(a+b+c)/2;
//     area=sqrt(s*(s-a)*(s-b)*(s-c));
//     return area;
// }
float area(triangle tr)
{
   float s,area;
      s=(tr.a+tr.b+tr.c)/2.0;
    area=sqrt(s*(s-tr.a)*(s-tr.b)*(s-tr.c));
    return area;
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int i,count=1;
    while(count>0)
    {
        count=0;
  for(i=0;i<(n-1);i++)
  {
    if(area(tr[i])>area(tr[i+1]))
    {
        swap(&tr[i],&tr[i+1]);
        count++;    
    }
  }
}
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
	sort_by_area(tr, n);
	printf("\n");
	for ( i = 0; i < n; i++) {
		printf("%d %d %d   %f\n", tr[i].a, tr[i].b, tr[i].c,area(tr[i]));
	}
	return 0;
}

