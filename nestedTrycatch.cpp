
#include <iostream>
using namespace std;

int main()
{
    int a=1;
	try{
		try{
			throw a;
		}
		catch(int x){
		cout<<"exception in inner try catch block.\n";
		throw x;
		}
	}
	catch(int x){
	cout<<"hello\n";}
cout<<"end of the program";
    return 0;
}
