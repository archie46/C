#include <stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
}node;
node* start=NULL;
void printNode(node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
node* reverse(node* start)
{
	node* prev=NULL;
	node* head=start;
	node* p=start;
	while(p!=NULL)
	{
		p=p->next;
		head->next=prev;
		prev=head;
		head=p;
	}
//	node* ptr=prev;
//	 while(ptr!=NULL)
//    {
//        printf("%d ",ptr->data);
//        ptr=ptr->next;
//    }
	return prev;
}
node* reversere(node* start)
{
		node* prev=NULL;
	node* head=start;
	node* p=start;
		head=p;
		prev=head;
   if(p->next==NULL)
   {
   	    p->next=head;
		head->next=prev;
		return prev;
   }
   else
   {
   	reversere(p);
   }
}
void insertindex(int data,int pos)
{
	int i=1;
	node * p=start;
	while(i<pos)
	{
		p=p->next;
		i++;
	}
	if(p==NULL)
	{
		printf("Not Found");
	}
	else
	{
		node* ptr=malloc(sizeof(node));
		ptr->data=data;
		ptr->next=p->next;
		p->next=ptr;
	}
}
int main()
{
    node* first=(node*)malloc(sizeof(node));
    node* second=(node*)malloc(sizeof(node));
    node* third=(node*)malloc(sizeof(node));
    node* fourth=(node*)malloc(sizeof(node));
    node* fifth=(node*)malloc(sizeof(node));
    first->data=155;
    first->next=second;
    
    second->data=14;
    second->next=third;
    
    third->data=11;
    third->next=fourth;
    
    fourth->data=98;
    fourth->next=fifth;
    
    fifth->data=89;
    fifth->next=NULL;
 
 start=first;
     printNode(first);
     printf("\nAfter\n");
     insertindex(34,0);
    // first=reversere(first);
     printNode(first);
//     printf("\nAfter\n");
//     first=reverse(first);
//     printNode(first);
    return 0;
}
