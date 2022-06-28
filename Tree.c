#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	char data;
	struct node* left;
	struct node* right;
}node;
node* root=NULL;

void pre(node* root)
{
	if(root!=NULL)
{
	printf("%c ",root->data);
    pre(root->left);
    pre(root->right);
}	
}
void in(node* root)
{
		if(root!=NULL)
{
	in(root->left);
	printf("%c ",root->data);
    in(root->right);
}
}
void post(node* root)
{
	if(root!=NULL)
	{
		post(root->left);
		post(root->right);
		printf("%c ",root->data);
	}
}
int c=0;
void count(node* root)
{
	if(root!=NULL)
	{
		c++;
		count(root->left);
		count(root->right);
	}
}
int main()
{
	node * first = ( node*) malloc (sizeof (node));
	node * second = ( node*) malloc (sizeof (node));
	node * third = ( node*) malloc (sizeof (node));
	node * fourth = ( node*) malloc (sizeof (node));
	node * fifth = ( node*) malloc (sizeof (node));
	node * sixth = ( node*) malloc (sizeof (node));
	node * seventh = ( node*) malloc (sizeof (node));
	node * eighth = ( node*) malloc (sizeof (node));
	
	first->data='A';
	first->left=second;
	first->right=third;
	
	second->data='B';
	second->left=NULL;
	second->right=fourth;
	
	third->data='C';
	third->left=NULL;
	third->right=sixth;
	
	fourth->data='D';
	fourth->left=fifth;
	fourth->right=NULL;
	
	fifth->data='E';
	fifth->left=NULL;
	fifth->right=NULL;
	
	sixth->data='F';
	sixth->left=seventh;
	sixth->right=eighth;
	
	seventh->data='H';
	seventh->left=NULL;
	seventh->right=NULL;
	
	eighth->data='G';
	eighth->left=NULL;
	eighth->right=NULL;
	
	root=first;
//	printf("In Order Traversal\n");
//	in(root);
//	printf("\nPost Order Traversal\n");
//	post(root);
//	printf("\nPre Order Traversal\n");
//	pre(root);
//	count(root);
//	printf("\n%d",c);
	return 0;
}
