#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
int size;
int top;
int* arr;
}stack;
stack* createStack(int size)
{
    stack* st=(stack*)malloc(sizeof(stack));
    st->size=size;
    st->top=-1;
    st->arr=(int*)malloc(st->size*sizeof(int));
    return st;
}
int isEmpty(stack* st)
{
    if(st->top==-1)
    return 1;
    return 0;
}
int isFull(stack* st)
{
    if(st->top==st->size-1)
    return 1;
    return 0;
}
void push(stack* st,int data)
{
 if(isFull(st))
 printf("Stack Overflow");
 else
 {
     ++st->top;
 st->arr[st->top]=data;
 }
}
int pop(stack* st)
{
    int p;
    if(isEmpty)
    printf("\nThe Stack is Empty");
    else
     p=st->top;
    st->top--;
    return st->arr[p];
}
void printStack(stack* st)
{
    int i=0;
    for(i=0;i<=st->top;i++)
    {
        printf("%d ",st->arr[i]);
    }
}
int main()
{
        int i,n;
        scanf("%d",&n);
      stack* st1=createStack(n);
//      push(st1,7);
//      push(st1,6);
//      push(st1,8);
//      printStack(st1);
//      printf("\n%d\n",pop(st1));
//      printStack(st1);
//      printf("\n");
//      push(st1,9);
//      printStack(st1);
//      pop(st1);
       for(i=0;i<n;i++)
       {
           int k;
           scanf("%d",&k);
           push(st1,k);
       }
        printStack(st1);
    return 0;
}
