#include<iostream>
#pragma once
#include<string.h>
#include"ParkingType.cpp"
#include"ParkingDetail.cpp"
// #include"../Vehicle/Vehicle.cpp"
using namespace std;

class ParkingSpot:public ParkingDetail{
    string ParkingId;
    ParkingType parkingType;
    bool isEmpty;
    int fare;

    public:
    ParkingSpot(ParkingType parkingType,int fare,string pid){
        setParkingId(pid);
        setParkingStatus(true);
        setParkingType(parkingType);
        setFare(fare);
    }
    //setter
    void setParkingId(string pid){
        this->ParkingId=pid;
        setFloorNumber(pid.substr(0,1));
        setRow(pid.substr( 1,1));
        setCol(pid.substr(2,1));
    }
    void setFloorNumber(string i){
        FloorNumber=i;
    }
    void setParkingType(ParkingType ptype){
        this->parkingType=ptype;
    }
    void setParkingStatus(bool b){
        this->isEmpty=b;
    }
    void setFare(int fare){
        this->fare=fare;
    }
    //getter
    string getFloorNumber(){
        return FloorNumber;
    }
    int getFare(){
        return fare;
    }
    string getParkingId(){
        return ParkingId;
    }
    bool getParkingStatus(){
        return isEmpty;
    }
    ParkingType getParkingType(){
        return parkingType;
    }
};