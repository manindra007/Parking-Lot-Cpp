#include<iostream>
#include<string>
#include<time.h>
#include"../Vehicle/vehicle.cpp"

using namespace std;
class TicketDetail
{
    time_t entryTime;
    string vehicleReg;
    VehicleType vehicleType;
    string rate;
    string spotId;
    string name;
    string barcode;
public:
    string generateTicket(Vehicle veh){
        this->vehicleReg=veh.getLicencePlateNum();
        this->vehicleType =veh.getVehicleType();
        return vehicleReg+" "+to_string(this->vehicleType);
    }

};

