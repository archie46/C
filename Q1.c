#include<stdio.h>
#include<math.h>
int main()
{
    printf("ready\n");
   int d;
   scanf("%d",&d);
    int i,j,k,arm;
    for(i=2;i<=d;i++)
    {
    	arm=0;
        for(j=i;j>0;j=j/10)
        {
        	k=j%10;
            arm+=(k*k*k);
        }
        if(arm==i)
        printf("%d ",i);
//        else
//        printf("Fail %d\n",i);
    }
     return 0;
}
