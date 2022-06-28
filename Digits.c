#include<stdio.h>
int main()
{
	int n,i,f,g=0,h;
	scanf("%d",&n);
	printf("The Digits Are:");
	for(i=n;i>1;i=i/10)
	{
		f=i%10;
		g=g*10+f;
	}
    for(i=g;i>1;i=i/10)
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
            return 0;
}
