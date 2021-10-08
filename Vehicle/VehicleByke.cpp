#include<iostream>
#include"vehicle.cpp"

class VehicleByke :public Vehicle{
public:
     VehicleByke(string licencePlateNumber,PersonDetail name=(*new PersonDetail())):Vehicle(Byke,licencePlateNumber,name){
    }
};