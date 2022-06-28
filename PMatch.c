#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 20
char stack_arr[MAX];
int top=-1;
void print(){
    int i;
    for(i=0;i<=top;i++){
    printf("%c ",stack_arr[i]);
     }
}
void push(char item){
   if(top==MAX-1){
      printf("Stack Overflow");
      return;
   }
     top++;
     stack_arr[top]=item;
   //   printf("%c is Pushed into the stack.\n",item);
   //   print();
   //   printf("\n");
}
char peek(){
   return stack_arr[top];
}
char pop(){
  if(top==-1){
     printf("Stack Underflow");
     return;
    }
  char item=stack_arr[top];
   top--;
   return item;
}

void pcheck(char str[]){
    int i;
    for(i=0;i<strlen(str);i++){
         if (str[i] == '('||str[i] == '{'||str[i] == '[')
                push(str[i]);
         if(str[i]==')'){
            if(peek()=='(')
           pop();
           else
           printf("NO");
           return;
         }
          
            if(str[i]=='}'){
               if(peek()=='{')
           pop();
           else
           printf("NO");
           return;
            }
         
            if(str[i]==']'){
                 if(peek()=='[')
           pop();
           else
           printf("NO");
           return;
            }
    }
     if(top==-1)
        printf("YES");
        else
        printf("NO");
}
int main(){
      char str[] = "{[()]}";
      pcheck(str);
   //   printf("%s\n",str);
}