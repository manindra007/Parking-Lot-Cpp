#include<iostream>
#pragma once
using namespace std;
class ParkingDetail 
{
private:
    string Row;
    string Col;
public:
    string FloorNumber;
    
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
    string getCol(){
        return Col;
    }

};

