 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int c,d;
 	char str1[100],str2[100];
 	printf("Enter 1st String:");
 	scanf("%[^\n]%*c",str1);
 	printf("Enter 2nd String:");
 	scanf("%[^\n]%*c",str2);
 	c=strlen(str1);
 	d=strlen(str2);
 	printf("The Length Of The 1st String Is:%d\n",c);
 	printf("The Length Of The 2nd String Is:%d\n",d);
 	strcat(str1,str2);
 	printf("The Concatenated String Is:\n%s",str1);
 	printf("\nNow 1st String is Copied To The 2nd String\n");
 	strcpy(str2,str1);
 	printf("%s",str2);
    return 0;
 }
