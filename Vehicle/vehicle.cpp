#include<iostream>
#pragma once
#include"VehicleType.cpp"
#include"../Person/PersonDetail.cpp"
using namespace std;

class Vehicle{
    string registrationNumber;
    PersonDetail owner;
    VehicleType vehicleType;
public:
    Vehicle(VehicleType vehicleType,string licencePlate,PersonDetail name){
        setVehicleType(vehicleType);
        setRegistrationNumber(licencePlate);
        setOwner(name);
    }
    // setters
    void setVehicleType(VehicleType vehicleType){
        this->vehicleType=vehicleType;
    }
    void setRegistrationNumber(string regNumber){
        this->registrationNumber=regNumber;
    }
    void setOwner(PersonDetail name){
        this->owner=name;
    }
    //getters
    VehicleType getVehicleType(){
        return vehicleType;
    }
    string getLicencePlateNum(){
        return registrationNumber;
    }
    PersonDetail getOnwer(){
        return owner;
    }
    
};