#include <stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}node;
void printNode(node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
node* insertfirst(node* p, int data)
{ 
node* ptr=(node*)malloc(sizeof(node));
ptr->next=p;
ptr->data=data;
return ptr;
}
node* insertindex(node* p,int data,int index)
{
   node* ptr=(node*)malloc(sizeof(node));
   node* s=p;
   int i=0;
   while(i!=index-1)
   {
     s=s->next;
     i++;
   }
   ptr->data=data;
   ptr->next=s->next;
   s->next=ptr;
   return p;
}
node* insertend(node* p,int data)
{
    node* ptr=(node*)malloc(sizeof(node));
     ptr->data=data;
    node*s=p;
    while(s->next!=NULL)
    {
        s=s->next;
    }
    s->next=ptr;
    ptr->next=NULL;
    return p;
}
node* insertafter(node* p,node* pnode,int data)
{
  node* ptr=(node*)malloc(sizeof(node));  
   ptr->data=data;
   ptr->next=pnode->next;
   pnode->next=ptr;
return p;
}
int main()
{
    node *first;
    node *second;
    first=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    first->data=155;
    first->next=second;
    second->data=14;
    second->next=NULL;
    // int g;
    // scanf("%d",&g);
     printNode(first);
     printf("\nAfter\n");
    first=insertend(first,11);
     printNode(first);
    return 0;
}