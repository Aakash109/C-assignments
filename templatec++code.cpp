#include<iostream>
using namespace std;
template<typename To>

To sum(To n1,To n2)
{
To rs;
rs=n1+n2;
return rs;
}
int main()
{
int A=10,B=20,C;
long a=11,b=22,c;
C=sum(A,B);
c=sum(a,b);
cout<<C<<endl<<c;
return 0;
}
