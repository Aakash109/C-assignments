#include <iostream>

using namespace std;

int main()
{
    int n2,n1;
    cin>>n1;
    cin>>n2;
    try{
        if(n2==0)
            throw n2;
        else{
           float result=n1/n2;
            cout<<"\n The result is: "<<result;
        }
    }
    catch(int x){
        cout<<"\n Can't divide by:"<<x;
    }
cout<<"end of the program";
    return 0;
}
