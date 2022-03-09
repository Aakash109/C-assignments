#include <iostream>

using namespace std;

class Student{
int marks[5];
int *marks1[5];
char name[30];
public:
int roll_no;
void getdata(){
    cout<<"enter the name "<<endl;
    cin>>name;
    cout<<"enter the roll_no:"<<endl;
    cin>>roll_no;
    for(int i=0;i<3;i++){
        cout<<"enter the marks"<<endl;
        cin>>marks[i];
        marks1[i]=&marks[i];
        }
}
void printdata(){
    cout<<"The name is:"<<name<<endl;
    cout<<"The roll_number is:"<<roll_no<<endl;
    for(int i=0;i<3;i++){
        cout<<endl;
        cout<<*marks1[i];
    }
}
};
    int main()
{
    Student s[3];
    Student *p=s;
    for(int i=0;i<3;i++){
    p->getdata();
    p->printdata();
    cout<<endl;
    }
    return 0;
}
