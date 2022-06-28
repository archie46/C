 #include<stdio.h> 
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
 int main()
 {
    char str1[100],str2[100],str3[100];
 	printf("Enter 1st String:");
 	scanf("%[^\n]%*c",str1);
 	printf("Enter 2nd String:");
 	scanf("%[^\n]%*c",str2);
 	printf("After Comparison:%d\n",comp(str1,str2));
}
