#include <iostream>

using namespace std;
class person{
public:
int a1=10;
void fun1(){
cout<<"inside public"<<endl;
}
protected:
int a2=11;
void fun2(){
cout<<"inside protected"<<endl;
}
private:
int a3=12;
void fun3(){
cout<<"inside private"<<endl;
}
};

class doctor: protected person{
public:
void doc(){
cout<<"variable in protected= "<<a2<<endl;
fun2();
}
};

class Assistant:public doctor{
    public:
    void assistant(){
        cout<<"Hey bro assistant"<<endl;
    }
};

int main(){
Assistant s2;
doctor d1;
s2.doc();
s2.assistant();
}
