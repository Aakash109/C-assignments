#include<iostream>
using namespace std;
class space{
    int a,b,c;
    public:
    space(int x=0, int y =0, int z=0){
       a = x;
       b = y;c = z; }
       void display(){
           cout<<"x="<<a<<"\ny="<<b<<"\nz="<<c<<endl; }
           friend space operator++(space value){ space temp;
           cout<<"inside friend"<<endl;
           temp.a = ++value.a;
           temp.b = ++value.b;
           temp.c = ++value.c;
           return temp;
  }
  };
  int main(){
      space a2;
      space a1(5,5,5);
      space a3(25,15,5);
      a1.display();
      a2 = ++a3;
      a2.display();
      return 0;}
