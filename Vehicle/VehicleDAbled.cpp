#include<iostream>
#include"vehicle.cpp"

class VehicleDAbled :public Vehicle{
public:
    VehicleDAbled(string licencePlateNumber,PersonDetail name=(*new PersonDetail())):Vehicle(DAbled,licencePlateNumber,name){
    }
};