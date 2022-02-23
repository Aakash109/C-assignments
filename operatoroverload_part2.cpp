#include<iostream>
using namespace std;

class complex{
	int real,img;
	public:
	complex(){
	real=0;
	img=0;
	}

	complex(int x,int y){
	real=x;
	img=y;
	}

	void display(){
	cout<<"real is:"<<real<<endl<<"img is"<<img<<endl;
	}

	complex operator + (complex ob){
		complex temp;
		temp.real=real+ob.real;
		temp.img=img+ob.img;
		return temp;
		}
	complex operator - (complex ob){
		complex temp;
		temp.real=real-ob.real;
		temp.img=img-ob.img;
		return temp;
		}
complex operator * (complex ob){
		complex temp;
		temp.real=real*ob.real;
		temp.img=img*ob.img;
		return temp;
		}
complex operator / (complex ob){
		complex temp;
		temp.real=real/ob.real;
		temp.img=img/ob.img;
		return temp;
		}

complex operator & (complex ob){
		complex temp;
		temp.real=real & ob.real;
		temp.img=img&ob.img;
		return temp;
		}
};


int main()
{
complex c1(1,1),c2(5,10);
complex c3;
c1.display();
c2.display();
c3.display();

cout<<"action starts here"<<endl;
c3=c1+c2;
cout<<"The addition ans is"<<endl;
c3.display();
c3=c1-c2;
cout<<"The subtraction ans is"<<endl;
c3.display();
c3=c1*c2;
cout<<"The multiplication ans is"<<endl;
c3.display();
c3=c1/c2;
cout<<"The division ans is"<<endl;
c3.display();
c3=c1&c2;
cout<<"the ampersand ans "<<endl;
c3.display();

return 0;
}
