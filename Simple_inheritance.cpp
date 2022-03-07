#include <iostream>

using namespace std;

class Person{
    public: 
    void talk(){	
        cout<<"he can talk"<<endl;
    }
    void walk(){
        cout<<"He can walk"<<endl;
    }
    void work(){
        cout<<"He can work"<<endl;
    }
};
class Doctor:public Person
{
  public:
  void doctor(){
      cout<<"I am doctor\n";
  }
};
int main()
{
    Person p1;
    Doctor e;
    e.doctor();
    e.talk();
    p1.talk();
    return 0;
}
