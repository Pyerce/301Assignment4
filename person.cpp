//
//  person.cpp
//  Assignment4
//
//  Created by Pierce Findlay on 4/16/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
// Pierce Findlay
// Section 2

#include "person.h"


Person::Person()
{
    payRate = 0;
    hoursWorked = 0;
}
string Person::getFirstName()
{
    return firstName;
}
string Person::getLastName()
{
    return lastName;
}

string Person::fullName()
{
    return firstName + " " + lastName;
}
float Person::getPayRate()
{
    return payRate;
}
float Person::getHoursWorked()
{
    return hoursWorked;
}
float Person::totalPay()
{
    return (payRate * hoursWorked);
}

