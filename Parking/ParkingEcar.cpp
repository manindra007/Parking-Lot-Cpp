#include<iostream>
#include"ParkingSpot.cpp"

class ParkingEcar :public ParkingSpot{
    public:
    ParkingEcar(string pid):ParkingSpot(pEcar,pid){
    }

};