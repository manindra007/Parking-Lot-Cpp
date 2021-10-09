#include<iostream>
#include"ParkingSpot.cpp"
using namespace std;

class ParkingCar :public ParkingSpot{
    public:
    ParkingCar(string pid):ParkingSpot(pCar,pid){
    }
};