// #include<iostream>
// // #include"../Vehicle/vehicle.cpp"
// #include"ctime"
// #include<math.h>
// // #include"ParkingSpot.cpp"
// using namespace std;

// class ParkingTicket{
//     string TicketId;
//     // // ParkingSpot ParkingSpotId;
//     string licencePlate;
//     clock_t LastAccessTime;
//     int ParkingFee;
//     public:
//     ParkingTicket(){
//         LastAccessTime=clock();
//         cout<<LastAccessTime<<endl;
//     }
//     int getFee(ParkingSpot pc){
//         cout<<clock()<<endl;
//         int timeDiff=ceil((clock()-LastAccessTime)/60000.0);
//         cout<<LastAccessTime<<endl;
//         cout<<timeDiff<<endl;
//         return timeDiff* pc.fare;
//     }
// };