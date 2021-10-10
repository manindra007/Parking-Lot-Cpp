#include<iostream>
#include<string>
#include<time.h>
#pragma once
#include"../Vehicle/vehicle.cpp"
#include"../Parking/ParkingSpot.cpp"

using namespace std;

class TicketDetail
{
    time_t entryTime=time(0);
    char* s;
    Vehicle vehicle;
    string vehicleReg;
    VehicleType vehicleType;
    int rate;
    string spotId;
    string name;
    string ticketData;
    // how to generate ticket ID can we use static int?
public:

    string generateTicket(){
        return ticketData;
    }
    string getTicketId(){
        return spotId;
    }
    TicketDetail(Vehicle veh,ParkingSpot pc):vehicle(veh){
        // this->vehicle=veh;
        this->vehicleReg=veh.getLicencePlateNum();
        this->vehicleType =veh.getVehicleType();
        setRate(veh);
        this->spotId=pc.getParkingId();
        this->name=veh.getOnwer().getName();
        pc.setParkingStatus(false);
        s=ctime(&entryTime);
        ticketData= vehicleReg+" "+to_string(this->vehicleType)+" "+veh.getOnwer().getName()+" "+pc.getParkingId()+" "+s;
        
    }
    int deleteTicket(ParkingSpot pc){
        // time_t currentTime=time(0);
        // time(&currentTime);
        // return currentTime-entryTime;
        pc.setParkingStatus(true);
        return rate;
    }
    void setRate(Vehicle veh){
        switch (veh.getVehicleType()){
            case Byke:
                this->rate=10;
                break;
            case Car:
                this->rate=30;
                break;
            case Ebyke:
                this->rate=20;
                break;
            case Ecar:
                this->rate=35;
                break;
            case Bus:
                this->rate=50;
                break;
            case DAbled:
                this->rate=15;
                break;

        }
    }

};

