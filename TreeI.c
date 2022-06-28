#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}node;
struct node* newNode()
{
	node* newNode=(node*)malloc(sizeof(node));
	if(!newNode)
	{
		printf("Creation Failed");
		exit(0);
	}
	else
	{
		printf("Created Succesfully\n");
	}
	printf("Enter Data Of Node:");
	scanf("%d",&newNode->data);
	return newNode;
}
int main()
{
	node* root=(node*)malloc(sizeof(node));
	root->data=11;
	node* n1=newNode();
	node* n2=newNode();
	root->right=n1;
	root->left=n2;
	printf("%d %d %d",root->data,n1->data,n2->data);
	return 0;
}
