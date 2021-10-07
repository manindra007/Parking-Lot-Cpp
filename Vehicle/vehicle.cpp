#include<iostream>
#include"VehicleType.cpp"
using namespace std;

class Vehicle{
    string registrationNumber;
    string ownerName="";
    VehicleType vehicleType;
    public:
        Vehicle(VehicleType vehicleType,string licencePlate,string name){
            setVehicleType(vehicleType);
            setRegistrationNumber(licencePlate);
            setOwnerName(name);
        }
        // setters
        void setVehicleType(VehicleType vehicleType){
            this->vehicleType=vehicleType;
        }
        void setRegistrationNumber(string regNumber){
            this->registrationNumber=regNumber;
        }
        void setOwnerName(string name){
            this->ownerName=name;
        }
        //getters
        VehicleType getVehicleType(){
            return vehicleType;
        }
        string getLicencePlateNum(){
            return registrationNumber;
        }
        string getOnwerName(){
            return ownerName;
        }
};