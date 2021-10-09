#include<iostream>
#include"ParkingSpot.cpp"

class ParkingByke :public ParkingSpot{
    public:
    ParkingByke(string pid):ParkingSpot(pByke,pid){
    }

};