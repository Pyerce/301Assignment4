//
//  person.hpp
//  Assignment4
//
//  Created by Pierce Findlay on 4/16/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
// Pierce Findlay
// Section 2

#ifndef person_h
#define person_h

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
using namespace std;

class Person
{
private:
    string lastName;
    string firstName;
    float  payRate;
    float  hoursWorked;
public:
    Person();
    Person(string fName, string lName, float rate, float hours);
    void setLastName(string lName);
    string getLastName();
    void setFirstName(string fName);
    string getFirstName();
    void setPayRate(float rate);
    float getPayRate();
    void setHoursWorked(float hours);
    float getHoursWorked();
    float totalPay();
    string fullName();
};

#endif /* person_h */
