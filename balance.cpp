//
//  balance.cpp
//  Assignment4
//
//  Created by Pierce Findlay on 4/16/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
// Pierce Findlay
// Section 2


#include "person.h"


struct PERSON
{
    char Name[20];
    float Balance;};


void Display(PERSON(&person)[10], int &numPeople)
{
    for (int i = 0; i < numPeople; i++)
    {
        
        cout << person[i].Name << " " << person[i].Balance << endl;
        
    }
}

void findRichest (PERSON (&personF)[10], int &numPeople)
{
    float tmp = personF[0].Balance;
    int counter = 0;
    string name1;
    
    while (counter < numPeople)
    {
        while (tmp < personF[counter].Balance)
        {
            tmp = personF[counter].Balance;
            name1 = personF[counter].Name;
        }
        counter++;
    }
    cout << "The customer with maximum balance is " << name1 << endl << endl;
}

void Deposit(string name2, PERSON (&personF)[10], int &nPeople)
{
    int i = 0;
    float temp;
    
    cout << name2 << ", how much would you like to deposit?" << endl;
    cin  >> temp;
    
    while  (i < nPeople)
    {
        
        if (name2 == personF[i].Name)
        {
            personF[i].Balance += temp;
            cout << "Now your new balance is " << personF[i].Balance << endl;
        }
        i++;
    }
}

void NewCopy(string namefile, PERSON (&person)[10], int &numPeople)
{
    ofstream oFile;
    oFile.open(namefile);
    if (oFile.is_open())
    {
        for (int i = 0; i < numPeople; i++)
        {
            oFile << person[i].Name << " " << person[i].Balance << endl;
        }
        oFile.close();
        
    }
}
int main()
{
    int counter = 0;
    
    string fName;
    string lName;
    string fullname;
    string customer;
    int numPeople = 6;
    float pay;
    
    string filename = "data.txt";
    ifstream file;
    
    PERSON person[10];
    
    file.open(filename.c_str());
    if (file.is_open())
    {
        while(file.eof() == false)
        {
            file >> fName >> lName >> pay;
            person[counter].Balance = pay;
            fullname = (fName + " " + lName);
            strcpy(person[counter].Name, fullname.c_str());
            ++counter;
        }
    }
    
    else
    {
        cout << "File not open!\n";
    }
    Display(person, numPeople);
    findRichest(person, numPeople);
    
    cout << "Enter your full name to deposit money:\n ";
    getline(cin, customer);
    
    Deposit(customer, person, numPeople);
    NewCopy(filename, person, numPeople);
    
    return 0;
}
