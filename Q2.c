#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random(int l,int u)
{
    int num=(rand()%(u-l+1))+l;
    return num;
}
int main()
{
    printf("Ready\n");
    int i,n;
    // scanf("%d",&n);
    srand(time(0));
    for(i=0;i<6;i++)
    {
        printf("%d ",random(1,100));
    }
    return 0;
}