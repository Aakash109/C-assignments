#include <iostream>

using namespace std;



class W{
    public:
    int a;
};

class X:virtual public W{
    public:
    int r;
};

class C:public virtual  W{
    public:
    int l;
};


 class d:public X,public C{
     public:
     int sum;
 };

int main(){
    d ob1;
    ob1.a=10;
    ob1.r=9;
    ob1.l=7;
    ob1.sum=ob1.a+ob1.l+ob1.r;
    cout<<ob1.sum;
    return 0;
}
