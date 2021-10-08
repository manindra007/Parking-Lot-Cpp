#include<iostream>
#include"vehicle.cpp"

class VehicleCar :public Vehicle{
    public:
    VehicleCar(string licencePlateNumber,string name=""):Vehicle(Car,licencePlateNumber,name){
    }
};