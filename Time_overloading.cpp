#include <iostream>
using namespace std;

class Time{
    int hour,min;
    public:
    Time(){
        cout<<"Default\n";
    }
    Time(int x){
        cout<<"inside the parameterized constructor\n";
        hour=x/60;
        min=x%60;
    }
    void operator =(int x){
        cout<<"inside\n";
        hour=x/60;
        min=x%60;
    }
    void display(){
        cout<<"Hour:"<<hour<<endl;
        cout<<"min:"<<min<<endl;
    }
};
int main()
{
    int x=130;
    Time T2;
    Time T1(490);
    T1.display();
    T2=x;
    T2.display();
    return 0;
}
