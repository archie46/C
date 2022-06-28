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
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
  printf("\n");
}
int length(node* ptr){
  int i;
  while(ptr!=NULL){
      i++;
      ptr=ptr->next;
  }
  return i;
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
     printf("%d",length(start));
     	return 0;
}
