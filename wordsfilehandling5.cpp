#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream fin,fout;
fin.open("ak.txt");
fout.open("aakash.txt");
char ch;
int count=0;
char word[30];
while(!fin.eof()){
	fin.get(ch);;
	fout<<ch;}

cout<<"copy done"<<endl;
fin.close();
fout.close();
return 0;
}
