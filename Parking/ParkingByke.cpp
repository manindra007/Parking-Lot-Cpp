#include<iostream>
#include"ParkingSpot.cpp"

class ParkingByke :public ParkingSpot{
    public:
    ParkingByke(string pid):ParkingSpot(pByke,10,pid){
    }

};