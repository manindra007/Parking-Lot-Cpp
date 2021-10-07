#include<iostream>
using namespace std;
class ParkingFloor 
{
public:
    string FloorNumber;
    string Row;
    string Col;
    virtual void setFloorNumber(string)=0;
    void setRow(string row){
        this->Row=row;
    }
    void setCol(string col){
        this->Col=col;
    }
    virtual string getFloorNumber()=0;
    string getRow(){
        return Row;
    }
    string getcol(){
        return Col;
    }

};

