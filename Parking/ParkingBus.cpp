#include<iostream>
#include"ParkingSpot.cpp"

class ParkingBus :public ParkingSpot{
    public:
    ParkingBus(string pid):ParkingSpot(pBus,pid){
    }

};