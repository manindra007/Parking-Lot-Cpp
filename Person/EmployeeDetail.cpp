#include<iostream>
#pragma once
#include<string>
#include"PersonDetail.cpp"
using namespace std;

class EmployeeDetail:public PersonDetail{
private:
    string employeeId;
    bool adminStatus=false;
public:
    EmployeeDetail(string name, int age, string address, string pincode, string mobile){
        setName(name);
        setAge(age);
        setPersonType(Employee);
        setAddress(address);
        setPincode(pincode);
        setMobileNumber(mobile);
    }
    void setEmployeeId(string employeeId){
        this->employeeId=employeeId;
    }
    void setAdminStatus(bool admin){
        adminStatus=admin;
    }
    string getEmployeeId(){
        return this->employeeId;
    }
    bool getAdminStatus(){
        return this->adminStatus;
    }
};