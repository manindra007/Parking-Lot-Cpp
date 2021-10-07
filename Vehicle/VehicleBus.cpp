#include<iostream>
#include"vehicle.cpp"

class VehicleByke :public Vehicle{
    public:
    VehicleByke(string licencePlateNumber,string name=""):Vehicle(Bus,licencePlateNumber,name){
    }
};