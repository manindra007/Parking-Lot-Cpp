#include<iostream>
#include"vehicle.cpp"

class VehicleDAbled :public Vehicle{
    public:
    VehicleDAbled(string licencePlateNumber,string name=""):Vehicle(DAbled,licencePlateNumber,name){
    }
};