#include<stdio.h>
#include<conio.h>
#define max 100
void insert();
void deletee();
void display();
int qu[max];
int front=0,rear=-1;
void main()
{
int choice;
char ch;
   do
   {
	printf("Enter your option\n\n");
	printf("1 . insert\n\n");
	printf("2 . deleation\n\n");
	printf("3 . display\n\n");
	scanf("%d",&choice);
	  switch(choice)
		{
	case 1: insert();
		break;
	case 2: deletee();
		break;
	case 3:display();
		break;
	default:printf("You entered wrong choice");
	   }
	printf("\n\nDo you wish to continue");
	fflush(stdin);
	scanf("%c",&ch);
   }
	while(ch=='y' || ch=='Y');
 }



void deletee()
{
  int item;
 int i;
  if(front<0)
  {
	printf("queue is empty");
	getch();
	exit();
  }
	else
	{
	 item=qu[front];
	 front=front+1;
	 printf("Delete element is %d",item);
	}
}


void insert()
{
 int item;
 if(rear>=max)
  {
	printf("queue is full");
	getch();
	exit(0);
  }
	else
	{
	 printf("Element to insert\t");
	 scanf("%d",&item);
	 rear=rear+1;
	 qu[rear]=item;
	 printf("\n\ninsert is success\n\n");
	}
}
void display()
{
int i;
for(i=front;i<=rear;i++)
{
printf("%d\t",qu[i]);
}

}