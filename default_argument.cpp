#include<iostream>
using namespace std;
int sum(int x,int y=10,int z=20)
{
	return (x+y+z);
}
int main()
{
cout<<"sum is "<<sum(5)<<endl;
cout<<"sum is "<<sum(5,5)<<endl;
cout<<"sum is "<<sum(5,5,5)<<endl;
return 0;
}
