//EXAMPLE PROGRAM FOR SINGLE LINKED LIST
# include <stdio.h>
# include <conio.h>
# include <alloc.h>
# include <stdlib.h>
struct list
{
 int number;
 struct list *next;
};
typedef struct list node;
node *first,*prev,*temp,*curr;

void create(void)
{
 printf("\n Stop by -999");
 temp=(node *)(malloc(sizeof(node)));
 printf("\n Enter the numbers ");
 scanf("%d",&temp->number);
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
  temp=(node *)(malloc(sizeof(node)));
  scanf("%d",&temp->number);
  } //end of while
}

void delete1(void)
{
 int num;
 printf("\nEnter the number to delete ");
 scanf("%d",&num);
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
 printf("\n No such number");
}

void insertbefore(void)
{
 int nu;
 temp=(node *)(malloc(sizeof(node)));
 printf("\n Enter the number ");
 scanf("%d",&temp->number);
 printf("\n Insert before which number ");
 scanf("%d",&nu);
 temp->next=NULL;
 prev=first;
 curr=first;
  if(first==NULL)    //if the list is empty then we can insert in this way
 {
   first=temp;
   return;
 }
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
  printf("\n No such number ");
}
void insertafter(void)
{
 int nu;
 temp=(node *)(malloc(sizeof(node)));
 printf("\n Enter the number ");
 scanf("%d",&temp->number);
 printf("\n Insert after which number ");
 scanf("%d",&nu);
 temp->next=NULL;
 prev=first;
 curr=first;
  if(first==NULL)    //if the list is empty then we can insert in this way
 {
   first=temp;
   return;
 }
 if(curr->number==nu)
 {
  temp->next=curr->next;
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
   return;
 }
  printf("\n No such number ");
}

void print(void)
{
 printf("\n The list is \n");
 printf(" -----------\n");
 temp=first;
 while(temp!=NULL)
 {
  printf("%d-->",temp->number);
  temp=temp->next;
 }
 printf("Nil");
 getch();
}

void main()
{
 int ch=0;
 first=NULL;
 clrscr();
 printf("\n Linked List creation \n");
 create();
 clrscr();
 while(ch!=5)
 {
   clrscr();
   printf("\n 1.Insert Before");
   printf("\n 2.Insert After");
   printf("\n 3.Delete ");
   printf("\n 4.Print ");
   printf("\n 5.Exit ");
   printf("\n Enter your choice ");
   scanf("%d",&ch);
   switch(ch)
   {
	case 1:
		insertbefore();
		print();
		break;
	case 2:
		insertafter();
		print();
		break;
	case 3:
		delete1();
		print();
		break;
	case 4:
		print();
		break;
	case 5:
		print();
		exit(1);
   }
 }
 getch();
}