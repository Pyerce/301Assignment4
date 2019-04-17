//
//  pay.cpp
//  Assignment4
//
//  Created by Pierce Findlay on 4/16/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
// Pierce Findlay
// Section 2


#include "person.h"


void readData(vector <Person> &worker, vector<int> &numWorker)
{
    ifstream iFile;
    iFile.open("input.txt");
    if (iFile)
    {
        string line;
        while (getline(iFile, line))
            cout << line << '\n';
        
        iFile.close();
        
    }
}


void writeData(vector <Person> &worker, vector<int> &numWorker)
{
    ofstream oFile;
    oFile.open("output.txt");
    oFile << worker[0].fullName() << " " << worker[0].totalPay();
    
    
    
    
    oFile.close();
}


int main()
{
    vector<Person> person;
    vector<int> numWorker;
    
    
    readData(person,numWorker);
    writeData(person,numWorker);
    person.emplace_back(100);
    numWorker.emplace_back(200);
    
    return 0;
}
