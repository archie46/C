#include<stdio.h>
int main()
{
    int n,i,j,num=0;
    printf("Ready");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        j=i%10;
        num=num*10+j;
    }
    if(num==n)
    printf("Yes");
    else
    printf("No%d",num);
    return 0;
}