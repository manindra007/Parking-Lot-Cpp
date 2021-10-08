#include<iostream>
#include"vehicle.cpp"

class VehicleEbyke :public Vehicle{
public:
    VehicleEbyke(string licencePlateNumber,PersonDetail name=(*new PersonDetail())):Vehicle(Ebyke,licencePlateNumber,name){
    }
};