#include<iostream>
#include<fstream>

using namespace std;
int main()
{
ofstream outfile;
outfile.open("data.txt");
outfile<<"this is my file";
long pos=outfile.tellp();
cout<<pos;
outfile.seekp(-7,ios::cur);
outfile<<"again my file";
outfile.close();
cout<<"Done";
return 0;
}
