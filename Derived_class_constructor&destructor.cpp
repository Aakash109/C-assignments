#include <iostream>

using namespace std;



class W{
    int a;

     public:
     W(){cout<<"W constructor"<<endl;}
     ~W(){cout<<"W destructor"<<endl;}
};

class X:public W{
    int r;
    public:
    X(){
        cout<<"child constructor"<<endl;
    }
    ~X(){
        cout<<"child destructor"<<endl;
    }
    
    X(int a){
        cout<<"child X constructor"<<endl;
    }
};


int main(){
    W a;
    cout<<endl;
    X q;
    cout<<endl;
    X q1(1);
    return 0;
}
