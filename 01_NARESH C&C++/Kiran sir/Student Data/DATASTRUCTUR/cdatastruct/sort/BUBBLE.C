

 //EXAMPLE PROGRAM FOR BUBBLE SORT
# include <stdio.h>
# include <conio.h>
void main()
{
 int n,a[10],i,j,temp,limit;
 clrscr();
 printf("\n Enter how many numbers ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
	printf("\n Enter %d number ",i);
	scanf("%d",&a[i]);
 }
 limit=n-1;
 for(i=0;i<n-1;i++)
  for(j=0;j<limit-i;j++)
	if(a[j+1]<a[j])
	{
	  temp=a[j];
	  a[j]=a[j+1];
	  a[j+1]=temp;
	}
 printf("\n After sort the numbers are \n");
 for(i=0;i<n;i++)
 printf("\n%d",a[i]);
 getch();
}
