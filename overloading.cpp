#include <iostream>

using namespace std;
float sum(float a,float b){
 return a+b;
}
int sum(int a,int b){
    return a+b;
}
int main()
{h
    int i,j,e;
    float k,l,f;
    cin>>i>>j;
    cin>>k>>l;
    e=sum(i,j);
    cout<<e<<endl;
    f=sum(k,l);
    cout<<f;
    return 0;
}
