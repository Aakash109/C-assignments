#include <iostream>

using namespace std;

int main()
{
    int n2,n1;
    cin>>n1;
    cin>>n2;
    try{if(n2!=0){
        float divi=(float)n1/n2;
        if(divi<0){
            throw 'e';
        }
        cout<<"n1/n2="<<divi;
}
    else
        throw n2;
}
    catch(int x){
        cout<<"\n Can't divide by:"<<x;
    }
    catch(char st){
        cout<<"exception division by charcter not possible\n";
    }
    catch(...){
        cout<<"exception";
    }
cout<<"end of the program";
    return 0;
}

