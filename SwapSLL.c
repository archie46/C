#include<stdio.h>
#include<stdlib.h>
typedef struct node {
 int data;
 struct node* next;
}node;
node* start1=NULL;
node* start2=NULL;
void createnode(node** start,int data)
{
   node* ptr=(node*)malloc(sizeof(node));
   node * p=*start;
   ptr->data=data;
   if(p==NULL)
   {
       ptr->next=NULL;
       *start=ptr;
   }
   else
{
    while(p->next!=NULL)
    {
      p=p->next;  
    }
    p->next=ptr;
    ptr->next=NULL;
}
}

 void display(node* start)
 {
     node* p=start;
     while(p!=NULL)
     {

         printf("%d\n",p->data);
         p=p->next;
     }
 }
 void swap()
 {
 	node* ptr=start1;
 	node* p=start2;
 	while(ptr!=NULL)
 	{
 		ptr->data+=p->data;
 		p->data=ptr->data-p->data;
 		ptr->data=ptr->data-p->data;
 		ptr=ptr->next;
 		p=p->next;
	 }
 }
int main()
{

createnode(&start1,11);
createnode(&start1,22);
createnode(&start1,33);
createnode(&start1,44);

createnode(&start2,1);
createnode(&start2,2);
createnode(&start2,3);
createnode(&start2,4);
   printf("\nFirst List\n");
     display(start1);
     printf("\nSecond List\n");
     display(start2);
     printf("\nAfter Swapping\n");
     swap();
     printf("\nFirst List\n");
     display(start1);
      printf("\nSecond List\n");
     display(start2);
return 0;
  }

