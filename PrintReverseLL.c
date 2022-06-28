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
    if(ptr!=NULL)
    {
        printNode(ptr->next);
        printf("%d ",ptr->data);
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
     printNode(start);
    return 0;
}
