/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Base
{
  int i;
public:
  int j, k;
  void seti (int x)
  {
    i = x;
  }
  int geti ()
  {
    return i;
  }
};

class derived:private Base
{
public:
  Base::j;
  Base::seti;
  Base::geti;
  //base::i;
  int a;
};
int main ()
{
  derived d;
  //d.i = 10;
  d.j = 20;
  //d.k = 40;
  d.a = 80;
  d.seti (8);
  cout << d.geti ()<< " " << d.j << " " << d.a;
  return 0;
}
