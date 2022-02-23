#include <iostream>

using namespace std;

int main()
{
   int *pt=new int;
   *pt=2;
   cout<<"value:"<<*pt<<endl;
   cout<<"address:"<<pt<<endl;
   cout<<"size of value:"<<sizeof(*pt)<<endl;
   cout<<"size of address:"<<sizeof(pt)<<endl;

    return 0;
}
