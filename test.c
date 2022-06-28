#include<stdio.h>
int sum(int n)
{
    
    if(n<10)
    {
    printf("%d\n",n);
    return n;
}
    else
    {
    printf("%d\n",n);
    return (n%10+sum(n/10));
    }
}
int main()
{
     int a=scanf("%d",&a);
   int d=sum(a);
    printf("%d",d);
}