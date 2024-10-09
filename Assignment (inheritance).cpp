#include <iostream>
using namespace std;
//Base class Vehicle 
class Vehicle {
  public:
  void vehicle () {
    cout<<"I am a Vehicle "<<endl;
  }
};
// class Fourwheeler derived from Vehicle 
class Twowheeler : public Vehicle {
  public:
  void twowheeler()
  {
    cout<<"I have two wheels"<<endl;
  }
};
//class Bike derived from Fourwheeler
class Bike: public Twowheeler{
  public:
  void bike() {
    cout<<"I am a bike"<<endl;
  }
};

int main() 
{
    Bike mybike;
    mybike.bike();
    mybike.twowheeler();
    mybike.vehicle();
    
    return 0;
}