#include<iostream>
#include"vehicle.cpp"

class VehicleEcar :public Vehicle{
    public:
    VehicleEcar(string licencePlateNumber,PersonDetail name=(*new PersonDetail())):Vehicle(Ecar,licencePlateNumber,name){
    }
};