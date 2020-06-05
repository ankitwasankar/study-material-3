//EXAMPLE PROGRAM FOR INLINE FUNCTIONS
# include <iostream.h>
# include <conio.h>
inline float mul(float x,float y)
{
  return x*y;
}
inline float div(float p,float q)
{
 return(p/q);
}
void main()
{
 float a=34.54;
 float b=12.53;
 clrscr();
 cout<<mul(a,b)<<endl;
 cout<<div(a,b)<<endl;
 getch();
}
