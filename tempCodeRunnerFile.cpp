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