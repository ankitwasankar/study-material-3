//EXAMPLE PROGRAM FOR SINGLE LINKED LIST
# include <iostream.h>
# include <conio.h>
# include <stdlib.h>
struct node
{
 int number;
 node *next;
};
class singlelist
{
  node *first,*prev,*temp,*curr;
  public:
  singlelist()
  {
    first=NULL;
  }
  void create()
  {
    cout<<"Stop by -999"<<endl;
    temp=new node;
    cout<<"Enter the numbers ";
    cin>>temp->number;
    while(temp->number!=-999)
    {
	temp->next=NULL;
	if(first==NULL)
	{
	   first=temp;
	   prev=first;
	}
	else
	{
	   prev->next=temp;
	   prev=temp;
	 }
   temp=new node;
   cin>>temp->number;
  } //end of while
}

void deletenode()
{
 int num;
 cout<<"\nEnter the number to delete ";
 cin>>num;
 if(first->number==num)
 {
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
      return;
    }
    prev=curr;
    curr=curr->next;
  }
 }
 if(curr->number==num)
 {
  prev->next=NULL;
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
 cout<<"\n before the number ";
 cin>>nu;
 temp->next=NULL;
 prev=first;
 curr=first;
 /* if(first==NULL) //if the list is empty then we can insert in this way
 {
   first=temp;
   return;
 }*/
 if(curr->number==nu)
 {
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
       prev->next=temp;
       temp->next=curr;
       return;
     }
     prev=curr;
     curr=curr->next;
   }
 }
 if(curr->number==nu)
 {
   prev->next=temp;
   temp->next=curr;
   return;
 }
  cout<<"\n No such number ";
}

void insertafter()
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
 /* if(first==NULL)    //if the list is empty then we can insert in this way
 {
   first=temp;
   return;
 }*/
 if(curr->number==nu)
 {
  temp->next=first->next;
  first->next=temp;
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
       temp->next=curr->next;
       curr->next=temp;
       return;
     }
     prev=curr;
     curr=curr->next;
   }
 }
 if(curr->number==nu)
 {
   curr->next=temp;
   temp->next=NULL;
   return;
 }
  cout<<"\n No such number ";
}

void print()
{
 cout<<" The list is "<<endl;
 cout<<" ----------- "<<endl;
 temp=first;
 while(temp!=NULL)
 {
  cout<<temp->number<<"-->";
  temp=temp->next;
 }
 cout<<"Nil"<<endl;
 getch();
}
};

void main()
{
 int ch=0;
 singlelist s;
 clrscr();
 cout<<" Linked List creation \n";
 s.create();
 clrscr();
 while(ch!=5)
 {
   clrscr();
   cout<<"\n 1.Insert Before";
   cout<<"\n 2.Insert After";
   cout<<"\n 3.Delete ";
   cout<<"\n 4.Print ";
   cout<<"\n 5.Exit ";
   cout<<"\n Enter your choice ";
   cin>>ch;
   switch(ch)
   {
	case 1:
		s.insertbefore();
		s.print();
		break;
	case 2:
		s.insertafter();
		s.print();
		break;
	case 3:
		s.deletenode();
		s.print();
		break;
	case 4:
		s.print();
		break;
	case 5:
		s.print();
		exit(1);
   }
 }
 getch();
}
