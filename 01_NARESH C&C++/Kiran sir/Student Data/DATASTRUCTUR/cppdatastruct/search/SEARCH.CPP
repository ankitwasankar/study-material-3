# include <iostream.h>
# include <conio.h>
# include <stdlib.h>
class searching
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
  void search()
  {
    int num;
    cout<<"ENTER A NUMBER TO FIND ";
    cin>>num;
    for(int i=0;i<n;i++)
    if(a[i]==num)
    {
      cout<<"The number found at  "<<i<<" Location";
      getch();
      exit(0);
    }
    cout<<"The number not foud  ";
  }
};
void main()
{
  clrscr();
  searching s;
  s.accept();
  s.print();
  s.search();
  getch();
}