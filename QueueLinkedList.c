#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
node* start=NULL;
void enqueue(int data)
{
   node* ptr=(node*)malloc(sizeof(node));
   node * p=start;
   ptr->data=data;
   if(start==NULL)
   {
       ptr->next=NULL;
       start=ptr;
   }
   else
{
    while(p->next!=NULL)
    {
      p=p->next;  
    }
    p->next=ptr;
}
}
void dequeue()
{
node * p=start;
if(start==NULL)
   {
       printf("Queue is Empty");
       return;
   }
else if(p->next==NULL)
   {
       printf("%d",p->data);
      start=NULL;
   }
else
{
printf("%d",start->data);
start=start->next;
}
}
void display(node* ptr)
{
    while(ptr !=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main ()
{
    enqueue(7);
    enqueue(10);
    enqueue(15);
    display (start);
    dequeue();
    display (start);
    return 0;
}


