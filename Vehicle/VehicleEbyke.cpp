#include<iostream>
#include"vehicle.cpp"

class VehicleEbyke :public Vehicle{
    public:
    VehicleEbyke(string licencePlateNumber,string name=""):Vehicle(Ebyke,licencePlateNumber,name){
    }
};