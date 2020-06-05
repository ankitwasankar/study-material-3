# include <iostream.h>
# include <conio.h>
# include <stdlib.h>
class binarysearch
{
  int a[100],n;
  public:
  void accept()
  {
    cout<<"ENTER N VALUE  ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cout<<"ENTER  "<<i<<" Value  ";
       cin>>a[i];
    }
  }
  void print()
  {
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
  }
  void sort()
  {
    int i,j,tmp,limit;
    limit=n-1;
    for(i=0;i<n-1;i++)
    for(j=0;j<limit-i;j++)
    if(a[j+1]<a[j])
    {
      tmp=a[j+1];
      a[j+1]=a[j];
      a[j]=tmp;
    }
  }
  void search()
  {
     int num,low,high,mid;
     cout<<"ENTER A NUMBER TO SEARCH  ";
     cin>>num;
     low=0;
     high=n-1;
     while(low<=high)
     {
       mid=(low+high)/2;
       if(num==a[mid])
       {
	 cout<<"THE NUMBER FOUND AT "<<mid<<" LOCATION";
	 getch();
	 exit(0);
       }
       else if(num<a[mid]) high=mid-1;
       else if(num>a[mid]) low=mid+1;
     }
     cout<<"THE NUMBER NOT FOUND ";
  }
};
void main()
{
  clrscr();
  binarysearch s;
  s.accept();
  s.sort();
  s.print();
  s.search();
  getch();
}

