#include <iostream>

using namespace std;

class space{
  int x,y,z;
  public:
  space(){
      x=y=z=0;}
  space(int a,int b,int c){
      x=a;
      y=b;
      z=c;
  }
  void operator -();
  void displ(){
      cout<<"\nx="<<x<<"\ny="<<y<<"\nz="<<z<<endl;}
  };
void space::operator -(){
    x=-x;
    y=-y;z=-z;
}
    int main()
{
    space s1(5,3,2);
    s1.displ();
    -s1;
    s1.displ();
    return 0;
}
