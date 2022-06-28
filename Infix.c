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
    int i,j,c=0;
    char k;
// char str[]="(a+b/(c*d^e))";
 char str[]="(a-(b+c*d)/e)";
// char str[]="((a+b)*(c+d))";
char p[strlen(str)];
 stack* st1=createStack(strlen(str));
 for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '('||str[i] == '+'||str[i] == '*'||str[i] == '/'||str[i] == '^'||str[i]=='-')
        {
            push(st1,str[i]);
           //  printStack(st1);
           //  printf("%d\n",st1->top);
        }
        else if(str[i] == ')')
        {
           // printf("%d\n",st1->top);
            k=pop(st1);
           // printf("%c",k);
           while(k!='(')
           {
            p[c]=k;
            c++;
           // printf("\n%s",p);
            k=pop(st1);
           }
        }
        else{
            p[c]=str[i];
            //printf("\n%s",p);
            c++;
        }
   }

//printStack(st1);
printf("\n%s",p);

return 0;
	     }

