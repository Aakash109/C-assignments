/*#include<iostream>
using namespace std;
template<class T>

T swap(T *a,T *b){
T temp;
temp=*a;
*a=*b;
*b=temp;
cout<<*a<<*b;
}
int main()
{
int a=10,b=20;
double e=3.3,h=5.92;
swap(&e,&h);
//cout<<c;
return 0;}

*/


/*
#include<iostream>
using namespace std;
template <class T,class U>
void swap(T *a,U *b)
{
cout<<"b4 swapping\n"<<endl;
cout<<"a is"<<*a;
cout<<"b is "<<*b;
T temp;
temp=*a;
*a=*b;
*b=temp;
cout<<"after swapping\n"<<endl;
cout<<"a is"<<*a;
cout<<"b is "<<*b;
}



int main()
{
char a='A';
char b='B';
swap(&a,&b);
return 0;
}

*/
/*
#include<iostream>
using namespace std;
template<class T> 

T swap(T *a,T *b){
T temp;
temp=*a;
*a=*b;
*b=temp;
cout<<*a<<endl<<*b;
}
int main()
{

char s='a';
char j='e';
swap(&s,&j);
//cout<<c;
return 0;}*/


/*
#include<iostream>
using namespace std;
template<class T> 

void swap(T *a,T *b){
T temp;
temp=*a;
*a=*b;
*b=temp;
cout<<*a<<endl<<*b;
}
int main()
{

string s1="aak";
string s2="ash";
swap(&s1,&s2);
//cout<<c;
return 0;
}
*/
/*



#include<iostream>
using namespace std;
template <class T,class U>
void swap(T *a,U *b)
{
cout<<"b4 swapping\n"<<endl;
cout<<"a is"<<*a;
cout<<"b is "<<*b;
T temp;
temp=*a;
*a=*b;
*b=temp;
cout<<"after swapping\n"<<endl;
cout<<"a is"<<*a;
cout<<"b is "<<*b;

}



int main()
{
string a="aak";
string b="ash";
swap(&a,&b);
return 0;
}*/

#include<iostream>
using namespace std;
template<class T,class y>

T swap(T *a,y *b){
T temp;
temp=*a;
*a=*b;
*b=temp;
cout<<*a<<*b;
}
int main()
{
int a=10,b=20;
double e=3.3,h=5.92;
swap(&e,&a);
//cout<<c;
return 0;}
