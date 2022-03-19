#include<iostream>
using namespace std;
template<class T,class U>

void multiply(T num1,U num2){
cout<<"Result "<<num1*num2<<endl;
}
int main()
{
int a=10,b=20;
double e=3.3,h=5.92;
multiply(a,b);
multiply(e,h);


multiply(a,h);

return 0;
}
