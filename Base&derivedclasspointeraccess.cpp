#include <iostream>

using namespace std;

class base{
    public:
    int b;
    void show(){
        cout<<"\nb="<<b;
    }
};

class derived: public base{
    public:
    int d;
    void show(){
        cout<<"\nb="<<b<<"\nd="<<d;
    }
};

int main()
{
base b;
derived dw;
base *bptr;
bptr=&b;
cout<<"Base class pointer assign address of base class object";
bptr->b=100;
bptr->show();
bptr=&dw;
bptr->b=190;
cout<<"\nBase class pointer assigns address of derived class object";
bptr->show();
derived *dptr;
dptr=&dw;
cout<<"\nDerived class pointer assigns address of derived class object";
dptr->d=700;
dptr->show();
    return 0;
}
