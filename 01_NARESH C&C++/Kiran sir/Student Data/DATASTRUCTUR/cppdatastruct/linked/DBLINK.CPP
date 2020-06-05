//EXAMPLE PROGRAM FOR DOUBLE LINKED LIST
# include <iostream.h>
# include <conio.h>
# include <stdlib.h>
struct node
{
 node *previous;
 int number;
 node *next;
};
class dblinkedlist
{
  private:
  node *first,*last,*prev,*temp,*curr;
  public:
  dblinkedlist()
  {
   first=NULL;
  }
 void create(void)
 {
 cout<<"\n Stop by -999";
 temp=new node;
 cout<<"\n Enter the numbers ";
 cin>>temp->number;
 while(temp->number!=-999)
 {
  temp->next=NULL;
  temp->previous=NULL;
  if(first==NULL)
  {
   first=last=temp;
   prev=first;
  }
  else
  {
   last=temp;
   prev->next=temp;
   temp->previous=prev;
   prev=temp;
  }
  temp=new node;
  cin>>temp->number;
  } //end of while
}
void deletenode(void)
{
 int num;
 cout<<"\nEnter the number to delete ";
 cin>>num;
 if(first->number==num)
 {
  first->next->previous=NULL;
  first=first->next;
  return;
 }
 else
 {
  prev=first;
  curr=first->next;
  while(curr->next!=NULL)
  {
    if(curr->number==num)
    {
      prev->next=curr->next;
      curr->next->previous=prev;
      return;
    }
    prev=curr;
    curr=curr->next;
  }
 }
 if(curr->number==num)
 {
  prev->next=NULL;
  last=prev;
  return;
 }
 cout<<"\n No such number";
}

void insertbefore()
{
 int nu;
 temp=new node;
 cout<<"\n Enter the number ";
 cin>>temp->number;
 cout<<"\n Before the number ";
 cin>>nu;
 temp->next=NULL;
 prev=first;
 curr=first;
 if(curr->number==nu)
 {
  first->previous=temp;
  temp->previous=NULL;
  temp->next=first;
  first=temp;
  return;
 }
 else
 {
   prev=curr;
   curr=curr->next;
   while(curr->next!=NULL)
   {
     if(curr->number==nu)
     {
       temp->previous=prev;
       prev->next=temp;
       temp->next=curr;
       curr->previous=temp;
       return;
     }
     prev=curr;
     curr=curr->next;
   }
 }
 if(curr->number==nu)
 {
   temp->next=prev->next;
   prev->next=temp;
   temp->previous=prev;
   curr->previous=temp;
   return;
 }
  cout<<"\n No such number ";
}
void insertafter(void)
{
 int nu;
 temp=new node;
 cout<<"\n Enter the number ";
 cin>>temp->number;
 cout<<"\n After the number ";
 cin>>nu;
 temp->next=NULL;
 prev=first;
 curr=first;
 if(curr->number==nu)
 {
  temp->previous=curr;
  temp->next=curr->next;
  curr->next->previous=temp;
  curr->next=temp;
  return;
 }
 else
 {
   prev=curr;
   curr=curr->next;
   while(curr->next!=NULL)
   {
     if(curr->number==nu)
     {
	temp->previous=curr;
	temp->next=curr->next;
	curr->next->previous=temp;
	curr->next=temp;
	 return;
     }
     prev=curr;
     curr=curr->next;
   }
 }
 if(curr->number==nu)
 {
     temp->previous=curr;
     curr->next=temp;
     temp->next=NULL;
     last=temp;
     return;
 }
  cout<<"\n No such number ";
}

void print(void)
{
 cout<<"\n The list is \n";
 cout<<" -----------\n";
 temp=first;
 while(temp!=NULL)
 {
  cout<<temp->number<<"-->";
  temp=temp->next;
 }
 cout<<"Nil";

 cout<<"\n The list in reverse order is \n";
 cout<<" ------------------------------\n";
 temp=last;
 while(temp!=NULL)
 {
  cout<<temp->number<<"-->";
  temp=temp->previous;
 }
 cout<<"Nil";
 getch();
}
};
void main()
{
 int ch;
 dblinkedlist d;
 clrscr();
 cout<<"\n Linked List creation \n";
 d.create();
 clrscr();
 while(ch!=5)
 {
   clrscr();
   cout<<"\n 1.Insert Before ";
   cout<<"\n 2.Insert After";
   cout<<"\n 3.Delete ";
   cout<<"\n 4.Print ";
   cout<<"\n 5.Exit ";
   cout<<"\n Enter your choice ";
   cin>>ch;
   switch(ch)
   {
	case 1:
		d.insertbefore();
		d.print();
		break;
	case 2:
		d.insertafter();
		d.print();
		break;
	case 3:
		d.deletenode();
		d.print();
		break;
	case 4:
		d.print();
		break;
	case 5:
		d.print();
		exit(1);
   }
 }
 getch();
}