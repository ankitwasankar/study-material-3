 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 #define max 10
 int  top=-1;
 int  stack[max];
 int  pop();
 void  push();
 void  display();
 void  main()
 {
 int p;
 char ch;
 clrscr();
 do
 {
 printf("1-for push\n 2-for pop\n 3-for display\n 4-for exit\n");
 printf("enter your choice\n");
 scanf("%d", &p);
 switch(p)
 {
 case1:push();
		 break;
 case2:printf("deleting value is %d\n",pop());
		 break;
 case3:display();
		 break;
 case4:exit(0);
		 break;
 defalut:printf("wrong  choice\n");
 }
 printf("WISH TO  CONTINUE\n");
 fflush(stdin);
 scanf("%c", &ch);
 }
 while(ch=='Y'|| ch=='y');
 getch();
 }
 void push()
 {
 int item;
 if(top>=max)
 {
 printf("stack is full");
 getch();
 exit(0);
 }
 else
 {
 printf("insert  stack  value");
 scanf("%d", &item);
 top=top+1;
 stack[top]=item;
 printf("inserted  value is %d\n", item);
 }
 }
 int pop()
 {
 int item;
 if(top==-1)
 {
 printf("stack  is  empty");
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
 void  display()
 {
 int i;
 printf("stack values are:");
 for(i=top; i>=0; i--)
 {
 printf("%d", stack[i]);
 }
 getch();
 }




















































