// Q32) Detect a cycle in Linked List.
// only the functional implementation
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
 int data;
 struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}

//Detecting lL function
}
int isLoop(struct Node *f)
{
 struct Node *p,*q;
 p=q=f;

 do
 {
 p=p->next;
 q=q->next;
 q=q?q->next:q;
 }while(p && q && p!=q);

 if(p==q)
 return 1;
 else
 return 0;
}
