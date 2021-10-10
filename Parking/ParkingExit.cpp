#include<iostream>
#include"../Ticket/TicketDetail.cpp"
#include"../Vehicle/vehicle.cpp"
#include"../Booking/ParkingTicket.cpp"
#include<vector>

using namespace std;
class ParkingExit
{
public:
    string releaseSpot(string tID,vector<ParkingSpot> &PA,vector<ParkingSpot> &PT,vector<TicketDetail> &TL){
        
        int pos=findSpotLocation(PT,tID);
        PA.push_back(PT[pos]);
        ParkingSpot pc=PT[pos];
        ParkingTicket pt;
        int Tpos=pt.findTicketPos(TL,tID);
        if(Tpos==TL.size()){
            return "Vehicle Already Removed";
        }
        int cost=TL[Tpos].deleteTicket(PT[pos]);
        PT.erase(PT.begin()+pos);
        TL.erase(TL.begin()+Tpos);
        cout<<"Total Cost of Parking: "<<cost<<endl;
        return "Exit Success";
    }
    
    int findSpotLocation(vector<ParkingSpot> PT,string id){
        int itr=0;
        while(itr!=PT.size()){
            if(PT[itr].getParkingId()==id){
                return itr;
            }
            itr++;
        }
        return itr;
        
    }
};
