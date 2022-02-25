#include <iostream>
using namespace std;

// Overloading Global new[] operator
void* operator new[](size_t sz)
{
  cout<<"Operator new []"<<endl;
  void* m = malloc(sz);
  return m;
}
// Overloading Global delete[] operator
void operator delete[](void* m)
{
  cout<<"Operator delete[]"<<endl;
  free(m);
}
class a
{
public:
  a()
  {
    cout<<"Constructor"<<endl;
  }
  ~a()
  {
cout<<"Destructor"<<endl;
  }
};
int main()
{
  a *Ptr = new a;
  delete Ptr;
  int * ptrArr = new int[5];
  delete [] ptrArr;
  return 0;
}
