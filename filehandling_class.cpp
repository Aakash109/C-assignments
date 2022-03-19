#include<iostream>
#include<fstream>


using namespace std;

class student {

public:
int roll;
char name[25];
float marks;
void getdata(){

cout<<"Enter roll no and name"<<endl;
cin>>roll>>name;
cout<<"Marks"<<endl;
cin>>marks;
}

void addrecord()
{

fstream f;
student stu;

f.open("file.dat",ios::app|ios::binary);
stu.getdata();
f.write((char *)&stu,sizeof(stu));
f.close();
}
};


int main()
{
student a;
char ch='n';
do{
a.addrecord();

cout<<"want add more(y/n)"<<endl;
cin>>ch;
}while(ch=='y' || ch=='Y');


cout<<"updated"<<endl;
return 0;
}
