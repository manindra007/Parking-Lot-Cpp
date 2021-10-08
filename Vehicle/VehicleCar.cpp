#include<iostream>
#include"vehicle.cpp"

class VehicleCar :public Vehicle{
    public:
    VehicleCar(string licencePlateNumber,PersonDetail name=(*new PersonDetail())):Vehicle(Car,licencePlateNumber,name){
    }
};