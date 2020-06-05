#include<stdio.h>
void main(int argc,char *argv[])

{
   int n1,n2;
   char op;
   if(argc<4)
   {
 puts("\nInsufficient Arguments");
       exit(0);
    }

    op=argv[2][0];

    n1=atoi(argv[1]);
    n2=atoi(argv[3]);

    switch(op)
    {
 case '+': printf("\n%d",n1+n2); break;
 case '-': printf("\n%d",n1-n2); break;
 case '*': printf("\n%d",n1*n2); break;
 case '/': printf("\n%d",n1/n2); break;
 case '%': printf("\n%d",n1%n2); break;
 default: printf("\nInvalid Operator");
      }
 }