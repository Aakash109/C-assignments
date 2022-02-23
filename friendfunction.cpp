#include <iostream>
using namespace std;
class Box
{
   private:
        int length;
   public:
         Box (){
             length=90;
         }
   friend int length1 (Box); //friend function
};
int length1(Box b)
{
    b.length+=10;
    return b.length;
}
int main ()
{
   Box b;
   cout <<"Length of box:"<<length1(b)<<endl;
    return 0;
}
