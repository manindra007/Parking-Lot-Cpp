#include<iostream>
#include"../Ticket/TicketDetail.cpp"
#include"../Vehicle/vehicle.cpp"
#include"../Booking/ParkingTicket.cpp"
#include<vector>
using namespace std;

class ParkingEntry
{

public:

    bool bookSpot(Vehicle vc,vector<ParkingSpot> &PA,vector<ParkingSpot> &PT,vector<TicketDetail> &TL){
        
        int pos=emptySpotLocation(PA,vc.getVehicleType());
        if(pos==PA.size()){
            return false;
        }
        PT.push_back(PA[pos]);
        ParkingSpot pc=PA[pos];
        PA.erase(PA.begin()+pos);
        ParkingTicket pt;
        TicketDetail td1= pt.bookTicket(vc,pc);
        TL.push_back(td1);
        cout<<td1.getTicketId()<<" "<<td1.generateTicket()<<endl;
        return true;
    }
    int emptySpotLocation(vector<ParkingSpot> PA,VehicleType veh){
        int itr=0;
        while(itr!=PA.size()){
            if((int)(PA[itr]).getParkingType()==(int)veh && (PA[itr]).getParkingStatus()){
                return itr;
            }
            itr++;
        }
        return itr;
        
    }
};
