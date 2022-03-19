#include<iostream>
using namespace std;

class Test
{
		int x;
	public:
	void read(){
		cout<<"enter a number\n";
		cin>>x;


	}
	class even{};
	class odd{};
	void check(){
	if(x%2==0){
		throw even();}
	else{
		throw odd();}}
};
int main(){
	Test t;
	t.read();
		try{
			t.check();
		}
		catch(Test::even)
		{
			cout<<"Number is even\n";
		}

		catch(Test::odd){
		cout<<"Number is odd\n";
		}
	return 0;
}
