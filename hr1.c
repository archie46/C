#include<stdio.h>
int main()
{
    
    int n=4,i=0,j,m=2*n-1;
    // scanf("%d",&n);
    for(i=m;i>0;i--)
    {
        printf("%d ",n);
    }
    printf("\n");
    do
    {
        printf("%d ",n);
        if(i==0)
        n--;
        i++;
    }
    while(i<m);

    return 0;
}