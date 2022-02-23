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
	complex operator +(complex ob)
	{
		complex addition1;
		addition1.real=real+ob.real;
		addition1.img=img+ob.img;
		return addition1;	
	}
};
int main()
{
	complex c1(2,4),c2(70,2),c3;
	c1.display();
	c2.display();
	c3=c1.operator +(c2);
	c3.display();
	return 0;
}
