#include<iostream>
#include"ParkingSpot.cpp"

class ParkingEbyke :public ParkingSpot{
    public:
    ParkingEbyke(string pid):ParkingSpot(pEbyke,15,pid){
    }

};