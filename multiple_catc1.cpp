#include <iostream>

using namespace std;

int main()
{
    int n2,n1;
    cin>>n1;
    try{if(n1==1)
       	throw n1;
    else if(n1==2)
	throw 'A';
    else
        throw 4.5;
}
    catch(int x){
        cout<<"\n Can't divide by:"<<x;
    }
    catch(char st){
        cout<<"exception division by charcter not possible\n";
    }
	catch(double r){

cout<<"hello\n";}
catch(...){

cout<<"hey";}
cout<<"end of the program";
    return 0;
}
