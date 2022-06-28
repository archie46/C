#include<stdio.h>
#include<stdlib.h>
int len(char a[])
{
	int i,l=0;
	for(i=0;(a[i]!='\0');i++)
	{
	 l++;
	}
	return l;
}
char swap(char *a,char *b)
{
	char c;
	c=*a;
	*a=*b;
	*b=c;
}
char reverse(int n,char a[])
{
		int i;
	if((n%2)==0)
{
  for(i=0;i<(n/2);i++)
 {
 	swap(&a[i],&a[n-(i+1)]);
 }
}
else
{
  for(i=0;i<((n-1)/2);i++)
 {
 	swap(&a[i],&a[n-(i+1)]);
 }	
}
}
int main()
{
 	char str1[100],str2[15];
 	printf("Enter A String:\n");
    scanf("%[^\n]%*c",str1);
    int n,m;
    n=len(str1);
    printf("Reverse Is\n");
    reverse(n,str1);
    printf("%s",str1);
    return 0;
}
