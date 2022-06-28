#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct stack{
int size;
int top;
char* arr;
}stack;
stack* createStack(int size)
{
    stack* st=(stack*)malloc(sizeof(stack));
    st->size=size;
    st->top=-1;
    st->arr=(char*)malloc(st->size*sizeof(char));
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
void push(stack* st,char data)
{
 if(isFull(st))
 printf("Stack Overflow");
 else
 {
     st->top++;
 st->arr[st->top]=data;
 }
}
char pop(stack* st)
{
    char p;
    if(isEmpty(st))
{
      return 0;
}
    else
 {
       // p=st->arr[st->top];
    st->top--;
  return st->arr[st->top+1];
 }
}
void printStack(stack* st)
{
    int i=0;
    for(i=0;i<=st->top;i++)
    {
        printf("%c ",st->arr[i]);
    }
}
int main()
{
          printf("Enter A Number:");
          int n,i;
          scanf("%d ",&n);
	     stack* st1=createStack(n);
	    // printf("%d",isEmpty(st1));

      //  printf("%d",isEmpty(st1));
        // char d=pop(st1);
        // printf("%c4",d);
        for(i=0;i<n;i++)
        {
            char k;
            scanf("%c ",&k);
            push(st1,k);
        }
       // int c=isFull(st1);
      //  printf("%d\n",c);
       // printStack(st1);
//        push(st1,'c');
//     //   printStack(st1);
//      //  printf("\n");
//        push(st1,'d');
//                push(st1,'e');
//                        push(st1,'f');
//                                push(st1,'g');
//                                printf("\n");
//                                       push(st1,'d');      printStack(st1);
       for(i=0;i<n;i++)
       {
          printf("%c",pop(st1));
       }
	     return 0;
	     }
