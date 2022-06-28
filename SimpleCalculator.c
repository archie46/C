#include<stdio.h>
int main()
{ 
    char op;
    float a,b;
    printf("Enter Operator For Arithmetic Operation +,-, *,/:\n");
    scanf("%c",&op);
     printf("Enter Any 2 Numbers:");
     scanf("%f %f",&a,&b);
     switch(op)
{
case '+':
printf("\n Sum=%f", a+b);
break;
case '-':
printf("\n Subtraction=%f", a-b);
break;
case '*' :
printf("\n Multiply=%f",a*b);
break;
case'/':
printf("\n Divide=%f", a/b);
break;
fefault:
printf("\n Invalid Operator");
break;
}
return 0;
}
