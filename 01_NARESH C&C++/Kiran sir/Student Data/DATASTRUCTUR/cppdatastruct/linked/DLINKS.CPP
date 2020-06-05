#include<iostream.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
struct node *prev;
};

typedef struct node NODE;


void inbig(int item)
{
   node *ptr=new node;
   ptr->info=item;
   if(head==NULL)
	 {
	   ptr->prev=ptr->next=NULL;
	   head=tail=ptr;
	 }

	  else
		{
		  ptr->prev=NULL;
		  ptr->next=head;
		  head->prev=ptr;
		  head=ptr;
		}
}




void inend(int item)
{
node *ptr=new node;
ptr->info=item;
if(tail==NULL)
{
ptr->prev=ptr->next=NULL;
head=tail=ptr;
}
else
{
 ptr->next=NULL;
 ptr->prev=tail;
 tail->next=ptr;
tail=ptr;
}
}




void deleend()
{
    if(tail==NULL)
      return;
    else
         if(tail->prev==NULL)
          {
                 ptr=tail;
                  head=tail=NULL;
          }    
          else
            {
              ptr=tail;
              tail=tail->prev;
              tail->next=NULL;
             }
            delete ptr;
}




void delbeg()
{
    if(head==NULL)
      return;
    else
         if(head->next==NULL)
          {
                 ptr=head;
                  head=tail=NULL;
          }    
          else
            {
              ptr=head;
              head=head->next;
             head->prev=NULL;
             }
            delete ptr;
}



