#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){	
	int a = 2;
	int b = 5;
	cout<<"before swap: a:="<<a<<" b :="<<b<<endl;
	cout<<"swap variables using pointer"<<endl;
	swap(&a,&b);
	cout<<"After swap: a:="<<a<<" b :="<<b<<endl;
	return 0;
}
