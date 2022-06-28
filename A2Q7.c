# include <stdio.h>
# include <stdlib.h>
# include <string.h>
typedef struct node {
int roll;
int dob;
int class;
char section;
char name [50];
struct node * next;
struct node * prev;
}node;
node* start = NULL;
void createnode (int roll, int dob, int class, char section, char name [] )
{
node * ptr = ( node*) malloc (sizeof (node));
node * p = start;
ptr ->roll = roll;
ptr -> dob = dob;
ptr -> class = class;
ptr -> section = section;
strcpy(ptr -> name,name);
if (start == NULL)
{
 ptr ->next = NULL;
 ptr ->prev = NULL;
 start = ptr;
}
else 
{   
while (p->next!= NULL)
{ 
p=p->next;
}
p->next = ptr;
ptr->prev = p;
ptr->next = NULL;
}
}
void display ( int roll )
{
 node * ptr = start;
while ( ptr->roll!= roll)
{ 
ptr=ptr->next;
if(ptr == NULL)
{
	printf ("Not found");
return;
}
}
printf ("Previous student\n");
printf ("Student Info\nRoll : %d\nDOB:%d\nclass: %d\n section: %c\nname: %s\n",ptr->prev->roll, ptr->prev->dob,ptr->prev->class,ptr->prev->section,ptr->prev->name);
printf ("Next student\n");
printf ("Student Info\nRoll : %d\n DOB : %d\n class: %d\n section: %c\nname:%s\n",ptr->next->roll,ptr->next->dob,ptr->next->class,ptr->next->section,ptr->next->name);
}
int main ()
{
createnode(1,2532002,12,'A',"Yash");
createnode(2,24102003,12,'A',"Shreyam");
createnode(3,05032002,12,'A',"Rahul");
display (2);
return 0;
}
