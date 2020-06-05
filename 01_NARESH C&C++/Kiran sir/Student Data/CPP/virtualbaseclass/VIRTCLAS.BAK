//EXAMPLE PROGRAM FOR VIRTUAL BASE CLASS
# include <iostream.h>
# include <conio.h>
class student
{
 protected:
 int roll_number;
 public:
 void get_number(int a)
 {
   roll_number=a;
 }
 void put_number()
 {
   cout<<"ROLL NUMBER  "<<roll_number<<endl;
 }
};
class test : virtual public student
{
 protected:
 float part1,part2;
 public:
 void get_marks(float x,float y)
 {
   part1=x;
   part2=y;
 }
 void put_marks()
 {
   cout<<"MARKS OBTAINED  "<<endl;
   cout<<"PART1 =  "<<part1<<endl;
   cout<<"PART2 =  "<<part2<<endl;
 }
};
class sports : public virtual student
{
 protected:
 float score;
 public:
 void get_score(float s)
 {
   score=s;
 }
 void put_score()
 {
   cout<<"SPORTS MARKS  "<<score<<endl;
 }
};
class result : public test, public sports
{
  float total;
  public:
  void display()
  {
    total=part1+part2+score;
    put_number();
    put_marks();
    put_score();
    cout<<"TOTAL SCORE  "<<total<<endl;
  }
};
void main()
{
  result s1;
  clrscr();
  s1.get_number(76);
  s1.get_marks(67,78);
  s1.get_score(70);
  s1.display();
  getch();
}