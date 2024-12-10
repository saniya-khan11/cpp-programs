//Write a C++ program to implement multilevel inheritance. 
/*
When first class is inherited by second class and second class is inherited by third class and so on, 
then it is called Multilevel Inheritence.

In this case each derived class is the base class for the next class.
In this type of inheritence atleast three classes are compulsory.
*/
#include <iostream>
using namespace std;
class vehicle{
    protected:
    string Brand;
    int modelYear; 
    public:
    void vehicleInfo(){
        cout<<"Vehical information : "<<endl;
        cout<<"Brand - "<<Brand<<endl;
        cout<<"Model year - "<<modelYear<<endl;
    }
    vehicle(string brand,int yr) : Brand(brand), modelYear(yr){}
};
class car : public vehicle{
    private:
    string type = "Car";
    protected:
    int numDoors;
    int trunkSpace;
    public:
    void carInfo(){
        cout<<"Car information : "<<endl;
        cout<<"Type - "<<type<<endl;
        cout<<"No. of Doors - "<<numDoors<<endl;
        cout<<"Trunk Space - "<<trunkSpace<<endl;
    }
    car(int doors,int space,string brand,int yr): numDoors(doors), trunkSpace(space), vehicle(brand,yr){}
};
class electricCar : public car{
    private:
    int batteryCapacity;
    int chargingTime;
    public:
    void electricCarInfo(){
        cout<<"Electric Car information : "<<endl;
        cout<<"Battery capacity in kwh - "<<batteryCapacity<<endl;
        cout<<"Charging time - "<<chargingTime<<endl;
    }
    electricCar(int capcity,int time,int doors, int space,string brand,int yr) : batteryCapacity(capcity), chargingTime(time),
   car(doors,space,brand,yr){}
};
int main(){
    vehicle toyota("Toyota", 1990);
    car landRover(4,850,"Land Rover Defender",2023);
    electricCar tesla(100,6,4,400,"Tesla",2018);
    toyota.vehicleInfo();
    cout<<endl;
    landRover.vehicleInfo();
    landRover.carInfo();
    cout<<endl;
    tesla.vehicleInfo();
    tesla.carInfo();
    tesla.electricCarInfo();
return 0;
}


