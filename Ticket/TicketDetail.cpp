#include<iostream>
#include<string>
#include<time.h>
#include"../Vehicle/vehicle.cpp"
#include"../Parking/ParkingSpot.cpp"

using namespace std;
class TicketDetail
{
    time_t entryTime=time(0);
    char* s;
    string vehicleReg;
    VehicleType vehicleType;
    string rate;
    string spotId;
    string name;
    string ticketData;
    // how to generate ticket ID can we use static int?
public:
    string generateTicket(Vehicle veh,ParkingSpot pc){

        this->vehicleReg=veh.getLicencePlateNum();
        this->vehicleType =veh.getVehicleType();
        setRate(veh);
        this->spotId=pc.getParkingId();
        this->name=veh.getOnwer().getName();
        pc.setParkingStatus(false);
        s=ctime(&entryTime);
        cout<<"aaaaaaaaa   "<<s<<endl;
        ticketData= vehicleReg+" "+to_string(this->vehicleType)+" "+veh.getOnwer().getName()+" "+pc.getParkingId()+" "+s;
        return ticketData;
    }
    int deleteTicket(){
        time_t currentTime=time(0);
        time(&currentTime);
        return currentTime-entryTime;
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

