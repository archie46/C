#include<stdio.h>
void fibonacci(int a,int b,int n)
{
    if(n!=0)
    {
        int c=a+b;
        printf("%d ",c);
        fibonacci(b,c,n-1);
    }
}
int main()
{
    int n;
    printf("Upto How Many Numbers You Want To Print?");
    scanf("%d",&n);
    int n1,n2,n3;
    n1=0;
    n2=1;
    printf("%d %d ",n1,n2);
    fibonacci(n1,n2,n-2);
    return 0;
}
