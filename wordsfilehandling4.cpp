#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream fin;
fin.open("ak.txt");
int count=0;
char word[30];
if(!fin)
	cout<<"file didn't open"<<endl;
else{
while(!fin.eof()){
	fin>>word;
	count++;}

cout<<"Total words:"<<count;}
fin.close();
}
