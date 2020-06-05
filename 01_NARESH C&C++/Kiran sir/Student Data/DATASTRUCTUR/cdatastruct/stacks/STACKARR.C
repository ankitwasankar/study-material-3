#include<stdio.h>
#include<conio.h>
#define max 10
void push();
int pop();
void display();
int stack[max];
int top=-1;
void main()
{
int choice;
char ch;
clrscr();
   do
	{
	printf("1 . PUSH\n\n");
	printf("2 . POP\n\n");
	printf("3 . DISPLAY\n\n");
	printf("4 . EXIT\n\n");
	printf("Enter your option : ");
	scanf("%d",&choice);
	  switch(choice)
		{
	case 1: push();
			break;
	case 2: printf("Deleted element is = %d\n\n",pop());
			break;
	case 3: display();
			break;
	case 4: exit(0);
	default:printf("You entered wrong choice");
		}
	printf("\n\nDo you wish to continue");
	fflush(stdin);
	scanf("%c",&ch);
	}
	while(ch=='y' || ch=='Y');
 }



int pop()
{
  int item;
  int i;
  if(top==-1)
  {
	printf("Stack is empty");
	getch();
	exit(0);
  }
	else
	{
	 item=stack[top];
	 top=top-1;
	}

  return(item);
}


void push()
{
 int item;
 if(top==max-1)
  {
	printf("Stack is full");
	getch();
	exit(0);
  }
	else
	{
	 printf("Element to insert\t");
	 scanf("%d",&item);
	 top=top+1;
	 stack[top]=item;
	 printf("\n\ninsert is success\n\n");
	}
}
void display()
{
int i;
printf("Stack elements:");
for(i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}
}