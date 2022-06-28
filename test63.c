#include<stdio.h>
#include<stdlib.h>
int calculate(char a,char b,char op)
{
    int a1=a-'0';
    int b1=b-'0';
    printf("%d%c%d\n",a,op,b);
      switch(op)
{
case '+':
 return a1+b1;
break;
case '-':
return a1-b1;
break;
case '*' :
 return a1*b1;
break;
case'/':
return a1/b1;
break;
}
}
int main()
{
    char a='5';
    char b='7';
    printf("%d",calculate(a,b,'+'));
    return 0;
}
