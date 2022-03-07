#include <iostream>

using namespace std;



class Car{
    public:
    void car(){
        cout<<"hi car"<<endl;
    }
};

class FuelCar:public Car{
    public:
    void fuelcar(){
        cout<<"i am fuel car"<<endl;
    }
};

class ElectricCar:public Car{
    public:
    void electricCar(){
        cout<<"i am ElectricCar"<<endl;
    }
};

class Hybri:public ElectricCar,public FuelCar{
  public:
  void ktm()
  {
      cout<<"i am "<<endl;
  }
};
int main(){
    Hybri h;
    h.ktm();
    h.fuelcar();
   h.electricCar();
}
