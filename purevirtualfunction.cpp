
#include <iostream>
//Hiearchical
using namespace std;

class shape
{
protected:
  float x;
 public:
  void getdata(){
      cin>>x;
  }
  virtual float calculateArea()=0;
};

class Square:public shape
{
public:
  float calculateArea(){
      return x*x;
  }};
int main ()
{
  Square j;
  j.getdata();
  cout<<j.calculateArea();
  return 0;
}
