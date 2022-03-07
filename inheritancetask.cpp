/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
 class Student{
        public:
      int roll_no;
      char name[50];
      float total=0;
      float percent;
    };
    
    class test{
        public:
        
        int marks[5];
    };
    class result:public Student,public test{
        public:
        void entry(){
            for(int i=0;i<sizeof(marks)/sizeof(marks[0]);i++){
                cin>>marks[i];
            }
        }
        void totall(){
        for(int i=0;i<sizeof(marks)/sizeof(marks[0]);i++){
          total=total+marks[i];
        }  
            percent=total/(sizeof(marks)/sizeof(marks[0]));
        
            cout<<"The total is:"<<total<<endl;
            cout<<"the percentage is "<<percent<<endl;
        }
    };
int main()
{
   result r1;
   cin>>r1.name;
   cin>>r1.roll_no;
   r1.entry();
   r1.totall();
    return 0;
}
