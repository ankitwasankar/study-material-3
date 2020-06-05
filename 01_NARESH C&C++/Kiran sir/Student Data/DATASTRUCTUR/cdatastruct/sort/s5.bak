#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	float bal=6000.80,a;
	clrscr();
   printf("1 for Depositing amount\n");
	printf("2 for Withdraw amount\n");
	printf("3 for Balance Enquiry\n");
	printf("4 for Exit\n");
	printf("Enter your Option:");
	scanf("%d",&i);
	switch(i)
	{
		case 1: printf("Enter deposite amount: ");
				  scanf("%f",&a);
				  bal = bal+a;
				  printf("Current balance = %f",bal);
				  break;
		case 2: printf("Enter withdrawl amount: ");
				  scanf("%f",&a);
				  if(bal>a && (bal-a)>=500)
				  {
						bal = bal-a;
						printf("Current balance = %f",bal);
				  }
				  else
				  {
						printf("Unable to process");
				  }
				  break;
		case 3: printf("Current balance = %f",bal);
				  break;
		default: printf("Exit");
	}
	getch();
}
