#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}node;
node* root=NULL;
int d=0;
int a,b;
void minmax(node* root)
{
	if(root!=NULL)
	{
		minmax(root->left);
		minmax(root->right);
		if(a<root->data)
		a=root->data;
			if(b>root->data)
		b=root->data;

	}
}
void pre(node* root)
{
	if(root!=NULL)
{
	printf("%d ",root->data);
    pre(root->left);
    pre(root->right);
}
}
void in(node* root)
{
		if(root!=NULL)
{
	in(root->left);
	printf("%d ",root->data);
    in(root->right);
}
}
void post(node* root)
{
	if(root!=NULL)
	{
		post(root->left);
		post(root->right);
		printf("%d ",root->data);
	}
}
node* insertion(node* root,int data)
{
    if (root==NULL)
    {
        root=(node*)malloc(sizeof(node));
        root->data=data;
        root->left=NULL;
        root->right=NULL;
        return root;
    }
    else if(data>root->data)
    {
        root->right=insertion(root->right,data);
    }
     else if(data<root->data)
    {
        root->left=insertion(root->left,data);
    }
    return root;
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

	first->data=77;
	first->left=second;
	first->right=third;

	second->data=55;
	second->left=fourth;
	second->right=fifth;

	third->data=88;
	third->left=NULL;
	third->right=sixth;

	fourth->data=44;
	fourth->left=NULL;
	fourth->right=NULL;

	fifth->data=66;
	fifth->left=NULL;
	fifth->right=NULL;

	sixth->data=99;
	sixth->left=NULL;
	sixth->right=NULL;

	root=first;
	printf("In Order Traversal\n");
	in(root);
	root=insertion(root,100);
	insertion(root,200);
	printf("\nIn Order\n");
	in(root);
//	printf("\nPost Order Traversal\n");
//	post(root);
//	printf("\nPre Order Traversal\n");
//	pre(root);
//	count(root);
//	printf("\n%d",c);
//a=root->data;
//b=root->data;
//minmax(root);
//printf("%d %d",a,b);
	return 0;
}
