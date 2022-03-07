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

class ladies{
public:
int l2=10;
void fun4(){
cout<<"inside public"<<endl;
}
protected:
int l1=11;
void fun5(){
cout<<"inside protected"<<endl;
}
private:
int l3=12;
void fun7(){
cout<<"inside private"<<endl;
}
};

class doctor: protected person,public ladies{
public:
void doc(){
cout<<"variable in protected= "<<a2<<endl;
fun2();
}
};

int main(){
    person p1;
    ladies a1;
    
    doctor d2;
    d2.doc();
    d2.fun4();
}
