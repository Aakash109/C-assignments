#include<iostream>
using namespace std;
class complex
{
	public:
	int real,img;
	
	complex()
{
	real=0;
	img=0;
}
	complex(int x,int y)
{
	real=x;
	img=y;

}
	void display()
	{
		cout<<"real part is:"<<real<<endl<<"img part is:"<<img<<endl;
	}
	friend complex operator + (complex ob1,complex ob2);
};

complex operator +(complex ob1,complex ob2)
	{
		complex addition1;
		addition1.real=ob1.real+ob2.real;
		addition1.img=ob1.img+ob2.img;
		return addition1;	
	}

int main()
{
	complex c1(22,13),c2(4,22),c3;
	c1.display();
	c2.display();
	c3=c1+c2;
	c3.display();
	return 0;
}
	
	
