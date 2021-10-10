#include<iostream>
#include"vehicle.cpp"

class VehicleBus :public Vehicle{
public:
    VehicleBus(string licencePlateNumber,PersonDetail name=(*new PersonDetail())):Vehicle(Bus,licencePlateNumber,name){
    }
};