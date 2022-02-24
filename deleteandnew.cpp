
#include <iostream>

using namespace std;

int main()
{
    int *ptr1,*ptr2,sum;
    ptr1=new int;
ptr2=new int;
cout<<"enter 1st number";
cin>>*ptr1;
cout<<"enter the number";
cin>>*ptr2;
sum=*ptr1+*ptr2;
cout<<"ans is"<<sum<<endl;
delete ptr1;
delete ptr2;
    return 0;
}
