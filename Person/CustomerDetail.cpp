#include<iostream>
#pragma once
#include<string>
#include"personDetail.cpp"
using namespace std;

class CustomerDetail:public PersonDetail{
private:
    string customerId="N/A";
public:
    CustomerDetail(){
        setName("");
        setAge(0);
        setPersonType(Customer);
        setAddress("");
        setPincode("");
        setMobileNumber("");
    }
    CustomerDetail(string name="", int age=0, string address="", string pincode="", string mobile=""){
        setName(name);
        setAge(age);
        setPersonType(Customer);
        setAddress(address);
        setPincode(pincode);
        setMobileNumber(mobile);
    }
    void setCustomerId(){
        this->customerId;
    }
    string getCustomerId(){
        return this->customerId;
    }
};