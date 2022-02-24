//demo program to operator overloding using friend function
#include<iostream>
using namespace std;
class Class2;
class Class1{
    int a, b;
    public:
        Class1(int x=0, int y=0){
            a = x;
            b = y;
        }
        void sum(){
            cout<<"addition of a and b is:"<<a+b<<endl;
        }
        void getData(){
            cout<<"a is:"<<a<<endl<<"b is:"<<b<<endl;
        }

        friend Class1 operator+(Class1 c1, Class2 c2); //friend function to overload the operator
};
class Class2{
    int a, b;
    public:
        Class2(int x=0, int y=0){
            a = x;
            b = y;
        }
        void sum(){
            cout<<"addition of a and b is"<<a+b<< endl;
        }
        void getData(){
            cout<<"a is: "<<a<<endl<<"b is:"<<b<<endl;
        }
        friend Class1 operator+(Class1 c1, Class2 c2);//friend function to overload the operator
};

Class1 operator+(Class1 c1, Class2 c2){
    Class1 temp;
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    return temp;
}

int main(){
    Class1 c1(5,7);
    c1.getData();
    c1.sum();

    Class2 c2(3,6);
    c2.getData();
    c2.sum();

    Class1 c3=c1+c2;
    c3.getData();
    c3.sum();
    return 0;
}
