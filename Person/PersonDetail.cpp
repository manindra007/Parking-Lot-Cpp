#include<iostream>
#include<string>
#include"PersonType.cpp"
#pragma once
using namespace std;

class PersonDetail
{
private:
    string name;
    int age; 
    PersonType personType;
    string address;
    string pincode;
    string mobileNumber;
public:
    //setter
    void setPersonType(PersonType personType){
        this->personType=personType;
    }
    void setName(string name){
        this->name=name;
    }
    void setAge(int age){
        this->age=age;
    }
    void setAddress(string address){
        this->address=address;
    }
    void setPincode(string pincode){
        this->pincode=pincode;
    }
    void setMobileNumber(string mobileNumber){
        this->mobileNumber=mobileNumber;
    }
    //getter
    PersonType getPersonType(){
        return this->personType;
    }
    string getName(){
        return this->name;
    }
    int getAge(){
        return this->age;
    }
    string getAddress(){
        return this->address;
    }
    string getPincode(){
        return this->pincode;
    }
    string getMobileNumber(){
        return this->mobileNumber;
    }
    
};
