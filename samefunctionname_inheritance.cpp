#include <iostream>

using namespace std;

class ABC{
    public:
    void d(){
        cout<<"hello"<<endl;
    }
};

class XYZ: public ABC{
    public:
    void d(){
        cout<<"hi"<<endl;
    }
};
int main()
{
  XYZ x;
  x.d();
  x.ABC::d();
    return 0;
}
