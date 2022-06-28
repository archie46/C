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
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
node* deletenode(node* p)
{
    node* ptr=p->next;
    free(p);
    return ptr;
}
void deletenindex(node* p,int ind)
{
    int i=0;
    node* s;
    while(i!=ind)
    {
        s=p;
        p=p->next;
        i++;
    }
    s->next=p->next;
    free(p);
}
void deletenlast(node* p)
{
    node* s=p;
    while(p->next!=NULL)
    {
        s=p;
        p=p->next;
    }
    s->next=NULL;
    free(p);
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
    // int g;
    // scanf("%d",&g);
     printNode(first);
     printf("\nAfter\n");
    // deletenindex(first,1);
    //  first=deletenode(first);
    //deletenlast(first);
     printNode(first);
    return 0;
}
