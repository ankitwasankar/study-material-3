#define PRINT(n,c){\
       for(i=1;i<n;i++)\
	{\
	for(j=i;j<n;j++)\
	    printf(" ");\
 for(j=1;j<=i;j++)\
	printf("%c",c);\
	  printf("\n");\
		}\
   }

main()
 {
	int i,j;
	clrscr();

	PRINT(6,'*');
	PRINT(5,'#');
	getch();
 }

