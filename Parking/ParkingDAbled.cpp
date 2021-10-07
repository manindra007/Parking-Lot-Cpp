#include<iostream>
#include"ParkingSpot.cpp"

class ParkingDAbled :public ParkingSpot{
    public:
    ParkingDAbled(string pid):ParkingSpot(pDAbled,5,pid){
    }

};