#include<iostream>
#include"vehicle.cpp"

class VehicleEcar :public Vehicle{
    public:
    VehicleEcar(string licencePlateNumber,string name=""):Vehicle(Ecar,licencePlateNumber,name){
    }
};