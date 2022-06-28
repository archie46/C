#include <stdio.h>
#include <string.h>

void compareStrings(char* x, char* y) 
{ 
    int flag = 0;
     while (*x != '\0' || *y != '\0') { 
        if (*x == *y) { 
            x++; 
            y++; 
        } 
  
         else if ((*x == '\0' && *y != '\0') 
                 || (*x != '\0' && *y == '\0') 
                 || *x != *y) { 
            flag = 1; 
            printf("Uequal Strings\n"); 
            break; 
        } 
    } 
  
     if (flag == 0) { 
        printf("Equal Strings\n"); 
    } 
}
 
int main()
{
    char s[1000];  
    int i,n,opt,c=0;
   
    
    printf("Enter any option\n\n");
        printf("1: Compare the Strings\n");
        printf("2: Reverse th string\n");
        printf("3: The string is palindrome or not\n");
        printf("Enter the choice\n\n\n\n\n");
        scanf("%d",&opt);
    
    
   switch(opt)
   {
   	 case 1:
   	  {
   	  	 char s1[20],s2[20];
   	  	 
			printf(" \n enter the First string:");
			scanf(" %[^\n]%*c",&s1[20]);
			printf(" \n Enter the second string:");
			scanf(" %[^\n]%*c",&s2[20]);   
  
     
          compareStrings(s1, s2); 
          break;
	  }
	  
	  case 2:
	  {
	  	 char str[20];
	  	 
	  	printf("Reversing of string \n");
	  	printf(" Enter the String to get reversed \n");
        gets( str);
        printf(" %[^\n]%*c",str);
        n=strlen(str);
        printf("\nReversed string is \n");
        for(i=n-1;i>=0;i--)
        {
        printf(" %[^\n]%*c",str[i]);
        }
        break;
	  }
	  
	  case 3:
	  {
	  	printf("Enter  the string : ");
        gets(s);
        n=strlen(s);
 
        for(i=0;i<n/2;i++)  
        {
    	  if(s[i]==s[n-i-1])
         	c++;
 
 	    }
 	     if(c==i)
 	        printf("string is palindrome");
         else
            printf("string is not palindrome");
            
        break;
	  }
	  default:
	  	{
	  		printf("Not a valid Option");
		  }
   }
    
 	  return 0;
}


 

