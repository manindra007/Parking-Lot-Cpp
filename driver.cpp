#include<iostream>
#include<conio.h>
#include"vehicle/VehicleByke.cpp"
#include"Parking/ParkingByke.cpp"
#include"Parking/ParkingCar.cpp"


using namespace std;

int main(){
    VehicleByke v1("UP53BM8651");
    cout<<v1.getVehicleType()<<endl;
    ParkingCar pc("1A1");
    cout<<pc.getFloorNumber()<<endl;
    cout<<pc.getRow()<<endl;////error is here
    cout<<pc.getCol()<<endl;
    ParkingByke pb("1A2");
    cout<<pb.getFloorNumber()<<endl;
    cout<<pb.getRow()<<endl;////error is here
    cout<<pb.getCol()<<endl;
    // cout<<v1.getLicencePlateNum()<<endl;
    // ParkingByke pb;
    // cout<<pb.getParkingType()<<endl;
    return 0;
}