//
//  main.cpp
//  Ex01
//
//  Created by Ally McConnell on 5/24/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//



#include <iostream>
using namespace std;

int ex01();

int main() {
    ex01();
}

int ex01()
{
    //section A
    bool hasPassedTest = true;
    
    //section B
    int x = rand();
    int y = rand();
    
    if ( x > y )
    {
        cout << " x is bigger than y" << endl;
    }
    //section C
    int numberOfShares;
    cout << "Please enter an integer value: ";
    cin >> numberOfShares;
    if ( numberOfShares < 100)
        cout << "i is less than 100";
    
    //section D
    int box;
    cout << "Enter box width: ";
    cin >> box;
    int book;
    cout << "Enter book width: ";
    cin >> book;
    
    if (box % book == 0)
    {
        cout << "Box is divisible";
    }
        
        
        
        
    
    
    
    
    
}

