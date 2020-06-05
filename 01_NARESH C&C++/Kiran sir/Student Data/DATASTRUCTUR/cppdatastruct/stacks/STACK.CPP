# include <iostream.h>
# include <conio.h>
# define MAX 10
class stack
{
  int stck[MAX],top;
  public:
  stack()
  {
   top=-1;
  }
  void push()
  {
    int x;
    if(top==MAX-1)
    {
      cout<<"STACK IS FULL ";
    }
    else
    {
      cout<<"Enter a number to push  ";
      cin>>x;
      stck[++top]=x;
    }
  }
  void pop()
  {
    if(top==-1)
    {
      cout<<"STACK IS EMPTY";
    }
    else
    cout<<"POPPED VALUE IS  "<<stck[top--];
  }
  void print()
  {
    if(top==-1)
    {
      cout<<"STACK IS EMPTY";
    }
    else
    {
      for(int i=0;i<=top;i++)
      cout<<stck[i]<<"\t";
    }
  }
};
void main()
{
  clrscr();
  stack s;
  int ch=1;
  while(ch!=4)
  {
    cout<<"\n1.Push  ";
    cout<<"\n2.Pop  ";
    cout<<"\n3.Print ";
    cout<<"\n4.Exit";
    cout<<"\nEnter your choice   ";
    cin>>ch;
    switch(ch)
    {
      case 1:
		s.push();
		break;
      case 2:
		s.pop();
		break;
      case 3:
		s.print();
		break;
      case 4:
		cout<<"Stack is closed";
    }
    getch();
  }
}
