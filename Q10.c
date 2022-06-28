
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
 int data;
 struct node* next;
}node;
node* start;
void dremove()
{
    node* p=start;
    while(p!=NULL)
    {
node* ptr=p->next;
node* prev=p;
while(ptr!=NULL)
{
    if(p->data==ptr->data)
  {
 prev->next=ptr->next;
free(ptr);
}
prev=ptr;
ptr=ptr->next;
}
p=p->next;
}
    
}
 void display()
 {
     node* p=start;
     while(p!=NULL)
     {

         printf("%d\n",p->data);
         p=p->next;
     }
 }
int main()
{
    node * first= (node*)malloc(sizeof(node));
    node * second= (node*)malloc(sizeof(node));
    node * third= (node*)malloc(sizeof(node));
    node * fourth= (node*)malloc(sizeof(node));

     first->data=11;
     first->next=second;

     second->data=11;
     second->next=third;

     third->data=33;
     third->next=fourth;

     fourth->data=33;
     fourth->next=NULL;
     start=first;
     display();
    printf("\nRemoving Duplicates\n");
     dremove();
     display();

return 0;
  }



