#include<iostream>

using namespace std;
class distanc
{
	public:
	int feet;
	int inch;
	public:
	distanc(int f,int i)
	{
	feet=f;
	inch=i;
	}

	int getfeet()
	{
	return feet;
	}
	int getinch()
	{
	return inch;
	}
};

int main()
{
	distanc d1(50,90);
	cout<<"feet:"<<d1.getfeet()<<endl<<"inches:"<<d1.getinch()<<endl;
	return 0;
}
