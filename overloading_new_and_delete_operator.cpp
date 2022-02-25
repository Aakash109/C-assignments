//overloading the 'new' and 'delete' operator

#include<iostream>
using namespace std;

class locate{
    int lon,lat;
    public:
    locate(){
        lon=0;
        lat=0;
    }
    locate(int a, int b){
        lon=a;
        lat=b;
    }
    void display(){
    cout<<"Coordinates are:"<<endl<<"Lon:"<<lon<<endl<<"lat:"<<lat<<endl;
}
    void * operator new(size_t byte){
        void *ptr;
        cout<<"inside the overloaded new"<<endl;
        ptr=malloc(byte);
        if(ptr==NULL){
            cout<<"no memory allocat"<<endl;
            exit(0);}
        return ptr;
    }
    
    void operator delete(void *ptr){
        cout<<"Inside the overloaded delete"<<endl;
        free(ptr);
    }
};
    int main(){
	locate l1,l2(1,6);
	l2.display();
	locate *loc=new locate(5,9);
	loc->display();
	delete loc;
	//int *pt=new int //this will not call the overloaded new
	return 0;
}
