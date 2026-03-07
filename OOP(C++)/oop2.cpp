#include <iostream>
using namespace std;

class Vehicle{
    public :
    string brand = "BMW";
    void honk(){
        cout<<"Tuut Tuut!\n";
    }
};

class Car : public Vehicle{
    public :
    string model;
};
 
int main(){
    Car myCar;
    myCar.model = "M5";
    myCar.honk();
    cout<<myCar.brand+"\n";
    cout<<myCar.model;
    return 0;
}
