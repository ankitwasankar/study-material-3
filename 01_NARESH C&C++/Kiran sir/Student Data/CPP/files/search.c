#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void linear();
void binary();
void main()
{
	int choice;
	char ch;
	clrscr();
	do
	{
		printf("\n\n 1. Linear Search");
		printf("\n\n 2. Binary Search");
		printf("\n\n 3. Exit");
		printf("\nEnter your option: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 	linear();
						break;
			case 2:	binary();
						break;
			case 3:	exit(0);
			default:	printf("Wrong choice");
		}
		printf("Do you wish to continue: ");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while (ch=='Y'||ch=='y');
}
void linear()
{
		int i,n,a[10],key;
		printf("How many values do you wish to enter: ");
		scanf("%d",&n);
		printf("Enter array values: ");
		for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Enter key to search");
		scanf("%d",&key);
		for(i=0;i<n;i++)
	{
		if (a[i]==key)
		{
			printf("Data found at a[%d]=%d",i,a[i]);
			getch();
			exit(0);
		}
	}
	printf("Data not found");
}
void binary()
{
		int i,n,a[10],key,mid;
		printf("How many values do you wish to enter: ");
		scanf("%d",&n);
		printf("Enter array values: ");
		for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Enter key to search");
		scanf("%d",&key);
		if (n%2==0)
			mid = n/2;
		else
			mid = (n+1)/2;
		while(mid>=0 && mid<=n)
		{
		if(a[mid]==key)
		{
			printf("Data found at a[%d]=%d",mid,a[mid]);
			getch();
			exit(0);
		}
		if (a[mid]>key)
			mid--;
		if (a[mid]<key)
			mid++;
	}
	printf("Data not found");
}


