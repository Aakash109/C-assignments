#include <iostream>
using namespace std;

class base{
    public:
    virtual void function(){
        cout<<"hi";
    }
};

class deri1: public base{
    public:
    void function(){
        cout<<"derived1";
    }
};

class deri:public base{
    public:
    void function1(){
        cout<<"ka";
    }
};
int main(){
 
   deri d1;
   deri1 d2;  
   d1.function();
   return 0;
}
