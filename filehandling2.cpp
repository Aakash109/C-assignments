#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream input;
string str;
input.open("ak.sh");
if(!input)
	cout<<"file not opened"<<endl;
else
{
while(getline(input,str)){
cout<<str<<" ";
}
}
return 0;
}
