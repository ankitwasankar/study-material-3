#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char stack[50];
int top=-1;
void in_to_po(char infix[]);
void push(char);
char pop();
void main()
{
char infix[25];

clrscr();
printf("Enter infix notation :");
gets(infix);
printf("\n\nPostfix Notation is  :");
in_to_po(infix);
getch();
}


void push(char sym)
{
if(top>=49)
{
printf("Stack over flow");
getch();
exit(0);
}
else
{
top=top+1;
stack[top]=sym;
}
}



char pop()
{
char item;
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



int pre(char ch)
{
if(ch==45)
{
return(5);
}
else
if(ch==42)
{
return(4);
}else if(ch==43)
{
return(3);
}
else
return(2);
}


void in_to_po(char infix[])
{
int length;
static int index=0,pos=0;
char symbol,temp;
char postfix[40];
length=strlen(infix);
push('#');
while(index<length)
{
symbol=infix[index];
 switch(symbol)
 {
  case'(':push(symbol);
	  break;
  case')':temp=pop();
	   while(temp!='(')
	   {
	   postfix[pos]=temp;
	   pos++;
	   temp=pop();
	   }
	   break;
 case'+':
 case'-':
 case'*':
 case'/':
 case'^':
		while(pre(stack[top])>=pre(symbol))
		{
		   temp=pop();
		   postfix[pos]=temp;
		   pos++;
		   }
		   push(symbol);
		   break;
  default:postfix[pos++]=symbol;
	   break;
	   }
	   index++;
	   }
	   while(top>0)
	   {
	   temp=pop();
	   postfix[pos++]=temp;
	   }
	   postfix[pos++]='\0';
	   puts(postfix);
	   return;
	   }
