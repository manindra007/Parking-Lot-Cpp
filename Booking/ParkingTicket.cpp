#include<iostream>
#include"../Ticket/TicketDetail.cpp"
#include"../Vehicle/vehicle.cpp"
#include<vector>
#pragma once

using namespace std;

class ParkingTicket{
    public:
    TicketDetail bookTicket(Vehicle vc,ParkingSpot pc){
        TicketDetail td1(vc,pc);
        return td1;
    }
    int findTicketPos(vector<TicketDetail> TL,string id){
        int itr=0;
        while(itr!=TL.size()){
            if(TL[itr].getTicketId()==id){
                return itr;
            }
            itr++;
        }
        return itr;
    }
};