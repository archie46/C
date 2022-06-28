#include<stdio.h>
int main()
{
	int n,i,f,g=0,h,k,c;
	printf("Enter A Number :");
	scanf("%d",&n);
	k=n;
	printf("The Digits Are:\n");
	for(i=n;i>0;i=i/10)
	{
		f=i%10;
		g=g*10+f;	
	}
    for(i=g;i>0;i=i/10)
	{
		h=i%10;		
	    switch (h)
     {
     	case 0:
             printf("Zero\n");
             break;
          case 1:
             printf("One\n");
             break;
          case 2:
             printf("Two\n");
             break;
          case 3:
             printf("Three\n");
             break;
          case 4:
             printf("Four\n");
             break;
             case 5:
             printf("Five\n");
             break;
          case 6:
             printf("Six\n");
             break;
          case 7:
             printf("Seven\n");
             break;
          case 8:
             printf("Eight\n");
             break;
          case 9:
             printf("Nine\n");
             break;
          default:
             printf("Invalid");
     }
    }
    if(n==0)
    {
    	printf("Zero");
	}

        	if((n%10)==0)
	{
		for(i=n;i>1;i=i/10)
		{
		    if((k%10)==0)
			{
			k=n/10;
			c++;
		    }
		}
		for(i=1;i<=c;i++)
		{
		printf("Zero\n");	
		}
	}
    return 0;
}
