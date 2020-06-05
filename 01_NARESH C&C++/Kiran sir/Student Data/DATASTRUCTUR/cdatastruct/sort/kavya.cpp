  #include<stdio.h>
  #include<conio.h>
  #define max 100
  void main()
  {
	 int a,*p;
	 clrscr();
	 a=10;
	 p=&a;
	 printf("The address of a=%d\n",a);
	 printf("The address of a=%d\n",p);
	 p=p+6;
	 printf("The address of addition arithmatic p=%u\n",p);
	 p=p-1;
	 printf("The address of subtraction arithmatic p=%u",p);
	 getch();
  }
