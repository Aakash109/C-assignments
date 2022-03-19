#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream input;
string str;
string str2;
input.open("ak.txt");
if(!input)
	cout<<"file not opened"<<endl;
else
{
while(!input.eof()){
input>>str>>str2;
cout<<str<<"\t"<<str2<<endl;
}
}
return 0;
}
