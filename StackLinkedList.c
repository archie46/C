#include <stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}node;
int isEmpty(node* top)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
int isFull(node* top)
{
    node* p=(node*)malloc(sizeof(node));
    if(p==NULL)
    {
        printf("Stack Overflow\n");
        return 1;
    }
    return 0;
}
node* push(node* top,int data)
{
    if(isFull(top))
    {
        printf("Stack Is Full");
    }
    else
    {
        node* p=(node*)malloc(sizeof(node));
        p->data=data;
        p->next=top;
        top=p;
        return top;
    }
}
void printNode(node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int pop(node** top)
{
    int pdata;
    if(isEmpty(*top))
    {
        printf("Stack Empty\n");
    }
    else
    {
        node* n=*top;
        *top=(*top)->next;
        pdata=n->data;
        free(n);
        return pdata;
    }
}
int main()
{
  node* top=(node*)malloc(sizeof(node));
  top=NULL;
top=push(top,788);
top=push(top,787);
top=push(top,789);
printNode(top);
printf("\n");
int x=pop(&top);
printNode(top);
    return 0;
}
