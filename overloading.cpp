#include <iostream>

using namespace std;
float sum(float a,float b){
    cout<<"float"<<endl;
 return 0;
}
int sum(int a,int b){
    cout<<"oye"<<endl;
    return a+b;
}
int main()
{https://www.onlinegdb.com/online_c_compiler#tab-stdin
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
