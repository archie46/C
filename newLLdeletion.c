#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node* start=NULL;
void display(node* ptr)
{
	while(ptr !=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
int isEmpty()
{
	if(start==NULL)
	return 1;
	return 0;
}
void deletefirst()
{
	node* p=(node*)malloc(sizeof(node));
		if(!p)
	{
		printf("Memory Not Allocated");
		return;
	}
	p=start;
	start=start->next;
	printf("Deleted item is %d\n",p->data);
	free(p);
}
void deleteend()
{
	node* p=(node*)malloc(sizeof(node));
	node* prev=(node*)malloc(sizeof(node));
		if(!p||!prev)
	{
		printf("Memory Not Allocated");
		return;
	}
	p=start;
	     while(p->next!=NULL)
     {
     	prev=p;
     	p=p->next;
	 }
	 	printf("Deleted item is %d\n",p->data);
	 		 prev->next=NULL;
	 	free(p);
}
void deleteposition()
{
	node* p=(node*)malloc(sizeof(node));
	node* prev=(node*)malloc(sizeof(node));
		if(!p||!prev)
	{
		printf("Memory Not Allocated");
		return;
	}
	p=start;
	prev=start;
	int i=0,pos;
	printf("Enter Position:");
	scanf("%d",&pos);
	if (pos==1)
	{
		deletefirst();
		return;
		 }     
     while(i<pos-1){
     	prev=p;
     	p=p->next;
     	i++;
	 } 
	  if(p==NULL)
	 {
	 	printf("Position Not Found");
	 	return;
	 }
	 	printf("Deleted item is %d\n",p->data);
	 		 prev->next=p->next;
	 	free(p);	
}
void deletenode()
{
	node* p=(node*)malloc(sizeof(node));
	node* prev=(node*)malloc(sizeof(node));
		if(!p||!prev)
	{
		printf("Memory Not Allocated");
		return;
	}
	p=start;
	prev=start;
	int data;
	printf("Enter Data:");
	scanf("%d",&data);
	     while(p->data!=data){
     	prev=p;
     	p=p->next;
	 } 
	  if(p==NULL)
	 {
	 	printf("Position Not Found");
	 	return;
	 }
	 	printf("Deleted item is %d\n",p->data);
	 		 prev->next=p->next;
	 	free(p);
}
int main()
{
     node* first=(node*)malloc(sizeof(node));
         node* second=(node*)malloc(sizeof(node));
           node* third=(node*)malloc(sizeof(node));
              node* fourth=(node*)malloc(sizeof(node));
              start=first;
     first->next=second;
     first->data=7;
      
     second->next=third;
     second->data=8;
     third->next=fourth;
     third->data=9;
     fourth->data=10;
     fourth->next=NULL;
     
     display(start);
    // deletefirst();
    //deleteend();
    //deleteposition();
    //deletenode();
     display(start);
     	return 0;
}
