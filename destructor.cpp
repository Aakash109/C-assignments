#include <iostream>
using namespace std;
class Box
{
   private:
        int length;
   public:
         Box (){
             cout<<"Under constructor"<<endl;
         }
         ~Box(){
             cout<<"Under destructor";
         }
};
int main ()
{
  Box ob1;
  return 0;
}
