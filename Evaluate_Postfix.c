#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
     st->top++;
 st->arr[st->top]=data;
 }
}
int pop(stack* st)
{
    int p;
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
        printf("%d ",st->arr[i]);
    }
}
int calculate(int a,int b,char op)
{
      switch(op)
{
case '+':
 return a+b;
break;
case '-':
return b-a;
break;
case '*' :
 return a*b;
break;
case'/':
return b/a;
break;
}
}
int main()
{
    int i,a,b,c,d;
   char str[]="222+/22*-";
// char str[]={'5','6','2','+','*',"12",'4','/','-'};
stack* st1=createStack(strlen(str));
for(i=0;i<strlen(str);i++)
{
    if(str[i] == '+'||str[i] == '*'||str[i] == '/'||str[i] == '^'||str[i]=='-')
    {
    a=pop(st1);
    b=pop(st1);
    int c=calculate(a,b,str[i]);
  //  printf("%d %d %d\n",a,b,calculate(a,b,str[i]));
 // printf("%d\n",c);
    push(st1,c);
//    printStack(st1);
//    printf("\n");
    }
    else
    {
        d=str[i]-'0';
        push(st1,d);
//        printStack(st1);
//         printf("\n");
    }
    printStack(st1);
    printf("\n");
}
int value=st1->arr[st1->top];
// printStack(st1);
// printf("%d\n",value);
// printStack(st1);
return 0;
	     }
