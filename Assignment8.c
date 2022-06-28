 #include<stdio.h>
 #include<string.h>
 int len(char a[])
{
	int i,l=0;
	for(i=0;(a[i]!='\0');i++)
	{
	 l++;
	}
	return l;
}
 int comp(char a[],char b[])
 {
 	int i,c,d=0,e,f;
 	c=len(a);
 	d=len(b);
 	for(i=0;i<c;i++)
 	{
	 	if(a[i]==b[i])
	 	{
	 		d++;
		}
		else
		{
			printf("The Strings Are Not Equal.");
		 	e=((int)a[i]-(int)b[i]);
		 	return e;
		 	break;
		}
	}
	if(d!=0)
	return 0;
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
void checkpal(char a[])
{
  int i;
  int  j=len(a);
  char  b[j];
  for(i=0;i<j;i++)
  {
  	b[i]=a[i];
  }
  reverse(j,a);
  int l=comp(a,b);
  if(l==0)
  printf(" is A Palindrome.\n");
  else
  printf(" is not A Palindrome.\n");
  
}
 int main()
 {
    char str1[100],str2[100],str3[100];
 	printf("Enter 1st String:");
 	scanf("%[^\n]%*c",str1);
 	printf("Enter 2nd String:");
 	scanf("%[^\n]%*c",str2);
 	printf("After Comparison:%d\n",comp(str1,str2));
 	printf("1st String");
 	checkpal(str1);
 	printf("2nd String");
 	checkpal(str1);
 	int f=len(str1);
 	printf("Reverse Of 1st String Is\n");
    reverse(f,str1);
    printf("%s\n",str1);
    int g=len(str2);
 	printf("Reverse Of 2nd String Is\n");
    reverse(f,str2);
    printf("%s\n",str2);
 }
