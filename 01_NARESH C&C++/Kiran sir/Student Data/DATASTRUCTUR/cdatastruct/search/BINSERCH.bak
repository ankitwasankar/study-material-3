//Example program for Binary search
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
void main()
{
 int n,a[100],i,j,temp,num,low,high,mid,limit;
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

 printf("\n Enter the number to search ");
 scanf("%d",&num);
 low=0;
 high=n-1;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(num==a[mid])
  {
    printf("\n Element is at %d location ",mid);
    getch();
    exit(0);
  }
  else if(num<a[mid]) high=mid-1;
  else if(num>a[mid]) low=mid+1;
 }
 printf("\n Given element is not found ");
 getch();
}