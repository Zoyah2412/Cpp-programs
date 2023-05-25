#include<iostream>
using namespace std;
class point
{
private:
  int x,y,x1,y1;
public:
  point()
  {
    x=0;
    y=0;
  }

  void getdata()
  {
    cout<<"enter x coordinate ";
    cin>>x1;
    x=x+x1;
    cout<<"enter y coordinate ";
    cin>>y1;
    y=y+y1;
  }
  void show()
  {
    cout<<"("<<x<<","<<y<<")";
  }
};
int main()
{
  class point a;
  a.getdata();
  a.show();
  return 0;
}