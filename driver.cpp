#include<iostream>
#include<conio.h>
#include"vehicle/VehicleByke.cpp"
#include"Vehicle/VehicleCar.cpp"
#include"Vehicle/VehicleEbyke.cpp"
#include"Vehicle/VehicleEcar.cpp"
#include"Vehicle/VehicleBus.cpp"
#include"Vehicle/VehicleDAbled.cpp"
#include"Parking/ParkingByke.cpp"
#include"Parking/ParkingEbyke.cpp"
#include"Parking/ParkingCar.cpp"
#include"Parking/ParkingEcar.cpp"
#include"Parking/ParkingBus.cpp"
#include"Parking/ParkingDAbled.cpp"
#include"Person/CustomerDetail.cpp"
#include"Person/EmployeeDetail.cpp" 
#include"Ticket/TicketDetail.cpp"
#include<vector>
#include"Parking/ParkingEntry.cpp"
#include"Parking/ParkingExit.cpp"

using namespace std;

    vector<ParkingSpot> AvailableParking;
    vector<ParkingSpot> TakenParking;
    vector<TicketDetail> TicketsList;

void canPark(Vehicle vc,ParkingEntry pEntry)
{
    if(pEntry.bookSpot(vc,AvailableParking,TakenParking,TicketsList))
    {
        cout<<"Parking success"<<endl;
    }
    else{
        cout<<"Parking for your Vehicle Type is not available"<<endl;
    }
}
int main(){
    
    //creating parking spot
    for(int j=0;j<4;j++){
        ParkingByke pb(to_string(1)+"A"+to_string(j));
        AvailableParking.push_back(pb);
    }
    for(int j=0;j<4;j++){
        ParkingEbyke pb(to_string(1)+"A"+to_string(j));
        AvailableParking.push_back(pb);
    }
    for(int j=0;j<4;j++){
        ParkingCar pb(to_string(1)+"A"+to_string(j));
        AvailableParking.push_back(pb);
    }
    for(int j=0;j<4;j++){
        ParkingEcar pb(to_string(1)+"A"+to_string(j));
        AvailableParking.push_back(pb);
    }
    for(int j=0;j<4;j++){
        ParkingBus pb(to_string(1)+"A"+to_string(j));
        AvailableParking.push_back(pb);
    }
    for(int j=0;j<4;j++){
        ParkingDAbled pb(to_string(1)+"A"+to_string(j));
        AvailableParking.push_back(pb);
    }
    
    // VehicleByke v1("UP53BM8651");
    // ParkingCar pc("1A1");
    // ParkingByke pb("1A2");
    EmployeeDetail ed1("manindra",26,"Address","pincode","mob");
    CustomerDetail cd1("singh");
    VehicleEbyke vc("up53cr7651",cd1);
    VehicleEbyke vc1("up53cr7651",cd1);
    VehicleEbyke vc2("up53cr7651",cd1);
    VehicleEbyke vc3("up53cr7651",cd1);
    VehicleEbyke vc4("up53cr7651",cd1);
    ParkingEntry pEntry1;
    ParkingExit pExit1;
    canPark(vc,pEntry1);
    canPark(vc1,pEntry1);
    canPark(vc2,pEntry1);
    cout<<pExit1.releaseSpot("1A0",AvailableParking,TakenParking,TicketsList)<<endl;    
    cout<<pExit1.releaseSpot("1A0",AvailableParking,TakenParking,TicketsList)<<endl;    
    canPark(vc3,pEntry1);
    canPark(vc4,pEntry1);
    return 0;
}