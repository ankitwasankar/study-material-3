#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert();
int deletee();
void display();
struct queue
{
int no;
struct queue *next;
}
*start=NULL;
typedef struct stack st;
void main()
{
int choice,item;
char ch;
clrscr();
   do
   {
    printf("Enter your option\n\n");
    printf("1 . push\n\n");
    printf(" 2 . deleation\n\n");
    printf("3 . display\n\n");
    scanf("%d",&choice);

      switch(choice)
       {
	case 1: insert();
		break;
	case 2: item=deletee();
		printf("Deleted element is = %d\n\n",item);
		break;
	case 3: display();
	       break;
	default:printf("You entered wrong choice");
       }
    printf("\n\nDo you wish to continue");
    fflush(stdin);
    scanf("%c",&ch);
   }
    while(ch=='y' || ch=='Y');
 }


void insert()
{
struct queue *p,*temp;
printf("%d",start);
temp=start;
p=(struct queue*)malloc(sizeof(struct queue));
printf("Enter number");
scanf("%d",&p->no);
printf("&p=%d\n",&p->next);
p->next=NULL;
printf("p=%d\n",p);
  if(start==NULL)
  {
   start=p;
   printf("s=%d\n",start);
  }
   else
   {
     while(temp->next!=NULL)
     {
     printf("t=%d",temp->next);
     temp=temp->next;
     }
     printf("p=%d",p);
     temp->next=p;
   }
}



int deletee()
{
struct queue *temp;
int value;
if(start==NULL)
{
printf("queue is empty");
getch();
exit(0);
}
else
{
temp=start;
value=temp->no;
start=start->next;
free(temp);
}
return(value);
}

void display()
{
struct queue *temp;
temp=start;
while(temp->next!=NULL)
 {
 printf("\nno= %d",temp->no);
 temp=temp->next;
}
 printf("\n no= %d",temp->no);
}
