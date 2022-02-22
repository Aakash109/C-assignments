#include<iostream>
using namespace std;

void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	cout<<"After swap: a:="<<a<<" b :="<<b<<endl;
}

int main(){	
	int a = 2;
	int b = 5;
	cout<<"before swap: a:="<<a<<" b :="<<b<<endl;
	cout<<"swap using value"<<endl;
	swap(a,b);
	return 0;
}
